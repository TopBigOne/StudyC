
/* 
* 形如：
* int fun(int,....){
    // to do sth...
    1: 使用 int 参数和 va_start 宏初始化 va_list变量为一个参数列表；
    2: va_arg 宏和 va_list 变量来访问参数列表中的每一项；
    3: va_end 来清理赋予 va_list 变量的内存
}
 */



#include <stdio.h>
#include <stdarg.h>
double average(int num, ...);

int main(int argc, char const *argv[])
{
    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
    printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));
    return 0;
}

double average(int num, ...)
{
    va_list valist;
    double sum = 0.0;
    int i;
    /* 为 num 个参数初始化 valist  */
    va_start(valist, num);
    /*  访问所有赋给 valist 的参数 */
    for (i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
    }
    /* 清理为 valist 保留的内存 */
    va_end(valist);

    return sum / num;
}