#include "unistd.h"
#include "stdio.h"
#define BUF_SIZE 30
//  进程间通信的基本概念
int main()
{
    int fds[2];
    char str[] = "who are you ?";
    char buf[BUF_SIZE];
    pid_t pid;

    pipe(fds);
    pid = fork();
    if (pid == 0)
    {
        write(fds[1], str, sizeof(str));
    }
    else
    {
        read(fds[0], buf, BUF_SIZE);
        puts(buf);
    }
}