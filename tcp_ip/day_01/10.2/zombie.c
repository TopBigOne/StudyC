#include <stdio.h>
#include <unistd.h>
// 僵尸进程
// 程序运行以后，将会暂停，在 30 秒以后，父进程和僵尸进程都会销毁
int main(int argc, char const *argv[])
{
    pid_t pid = fork();

    if (pid == 0)
    {
        puts("Hi ,I am child process.");
    }
    else
    {
        printf("Child Process ID: %d \n", pid); // 输出子进程 id，可以通过该值，查看子进程状态（是否为僵尸进程）
        sleep(30);                              // sleep 30 sec;父进程暂停 30 秒，
                                                //如果父进程终止，处于僵尸状态的子进程同时销毁。因此延缓父进程的执行
                                                // 以便验证僵尸进程；
    }
    if (pid == 0)
    {
        puts("End child process");
    }
    else
    {
        puts("End parent process");
    }

    return 0;
}
