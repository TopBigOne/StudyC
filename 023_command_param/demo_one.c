#include "stdio.h"

/**
 * 命令行参数是使用 main() 函数参数来处理的，其中，，
 *
 * @param argc  argc 是指传入参数的个数
 * @param argv  是一个指针数组，指向传递给程序的每个参数
 * @return
 */

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        printf("The argument supplied is %s\n", argv[1]);
    }
    else if (argc > 2)
    {
        printf(" too many arguments supplied.\n");
    }
    else
    {
        printf("One argument expected.\n");
    }
}