#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "unistd.h"
#include "sys/select.h"
#include "sys/time.h"
#include "sys/socket.h"
#include "arpa/inet.h"

#define BUF_SIZE 100
void error_handing(char *buf);
/*
 * 12.2 p:205
 * 实现 I/O复用服务器端
 */
int main(int argc, char *argv[])
{
    int serv_sock, clnt_sock;
    struct sockaddr_in serv_adr, clnt_adr;
    struct timeval timeout;
    fd_set reads, cpy_reads;

    socklen_t adr_sz;
    int fd_max, str_len, fd_num, i;
    char buf[BUF_SIZE];
    if (argc != 2)
    {
        printf("Usage :%s <port>\n", argv[0]);
        exit(1);
    }

    serv_sock = socket(PF_INET, SOCK_STREAM, 0);
    memset(&serv_adr, 0, sizeof(serv_adr));
    serv_adr.sin_family = AF_INET;
    serv_adr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_adr.sin_port = htons(atoi(argv[1]));

    if (bind(serv_sock, (struct sockaddr *)&serv_adr,
             sizeof(serv_adr)) == -1)
    {
        error_handing("bind() error");
    }
    if (listen(serv_sock, 5) == -1)
    {
        error_handing("listen() error");
    }

    FD_ZERO(&reads);
    FD_SET(serv_sock, &reads);
    fd_max = serv_sock;
    while (1)
    {
        cpy_reads = reads;
        timeout.tv_sec = 5;
        timeout.tv_usec = 5000;

        // 这行 if代码有 2 个作用，
        // 1：给 fd_num 附上了值；
        // 2：判断fd_num 的值是否等于 1；
        // 备注：我不知道这种即赋值又做逻辑判断的写法，
        // 世界上，第一个写它人是谁，是怎么想出来的？好好玩.....
        // 在 java 并发包的 Concurrent 类中，大佬Doug lea 大量运用了这种烧脑的写法（人精；
        // 撸码这么多年，我顶多会判断select()是否会等于==1，顺便做个赋值，
        // 这种骚气的简洁的操作，还真没这么写过；以后可以刻意试一试....
        if ((fd_num = select(fd_max + 1, &cpy_reads, 0, 0, &timeout)) == -1)
        {
            break;
        }
        // 现在直接用fd_num变量了，其实就是select(fd_max+1,&cpy_reads,0,0,&timeout)的值；
        if (fd_num == 0)
        {
            continue;
        }
        for (i = 0; i < fd_max + 1; i++)
        {
            if (FD_ISSET(i, &cpy_reads))
            {
                // connect the request.
                if (i == serv_sock)
                {
                    adr_sz = sizeof(clnt_adr);
                    clnt_sock = accept(serv_sock, (struct sockaddr *)&clnt_adr, &adr_sz);
                    FD_SET(clnt_sock, &reads);
                    if (fd_max < clnt_sock)
                    {
                        fd_max = clnt_sock;
                    }
                    printf("connect client :%d\n", clnt_sock);
                }
                else
                {
                    // read message.
                    str_len = read(i, buf, BUF_SIZE);
                    // close request...
                    if (str_len == 0)
                    {
                        FD_CLR(i, &reads);
                        close(i);
                        printf("close client :%d\n", i);
                    }
                    else
                    {
                        // echo
                        write(i, buf, str_len);
                    }
                }
            }
        }
    }
    close(serv_sock);

    return 0;
}

void error_handing(char *buf)
{
    fputs(buf, stderr);
    fputc('\n', stderr);
    exit(1);
}
