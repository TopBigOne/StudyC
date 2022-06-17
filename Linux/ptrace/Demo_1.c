
#include<sys/ptrace.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<sys/user.h>
#include<stdio.h>

// https://medium.com/@lizrice/a-debugger-from-scratch-part-1-7f55417bc85f
int main(){
    pid_t  child ;
    struct user_regs_struct regs;
    // 创建一个子进程
    child = fork();
    if (child==0)
    {
        ptrace(PT_TRACE_ME,0,NULL,NULL);
        execl("/bin/ls","ls",NULL);
    }
    else{
        // 开始：父进程
        // 等待子进程发送一个SIGCHILD 信号
        wait(NULL)
        // 获取子进程的各个寄存器的值
        ptrace(PTRACE_GETREGS,child,NULL,&regs);
        printf("Register: rdi[%ld], rsi[%ld], rdx[%ld], rax[%ld], orig_rax[%ld]\n",
                regs.rdi, regs.rsi, regs.rdx,regs.rax, regs.orig_rax); 
        ptrace(PT_CONTINUE,child,NULL,NULL);//继续运行子线程
        sleep(1);

    }

    return 0;
    
}