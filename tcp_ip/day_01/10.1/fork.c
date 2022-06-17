#include <stdio.h>
#include <unistd.h>

int gval = 10;
int main(void)
{
    pid_t pid;
    int lval = 20;
    gval++;
    lval++;
    // 创建子进程。父进程的 pid 中存有子进程的 ID，子进程的 pid 是 0；
    pid = fork();
    // if child process.
    if (pid == 0)
    {
        gval += 2;
        lval += 2;
    }
    else
    {
        // if parent process
        gval -= 2;
        lval -= 2;
    }

    if (pid == 0)
    {
        printf("child Proc :[%d,%d]\n", gval, lval);
    }
    else
    {
        printf("parent Proc : [%d,%d]\n", gval, lval);
    }
    // 调用
    return 0;
}
