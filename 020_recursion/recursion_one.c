#include "stdio.h"
/*
 * recursion : 递归 ， 美  [rɪˈkɜːrʒn」
 *
*/

/**
 * 裴波那楔数列
 * @param i
 * @return
 */
int fibonaci(int i);

/**
 * 求一个数阶乘
 * @param i
 * @return
 */
double factorial(unsigned int i);

int main()
{

    int i = 15;
    printf("%d 的阶乘是：%f\n", i, factorial(i));
    printf("----华丽的分割线--------------------");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t\n", fibonaci(i));
    }
    return 0;
}

/**
 * 数的阶乘
 */
double factorial(unsigned int i)
{
    if (i <= 1)
    {
        return 1;
    }

    return i * factorial(i - 1);
}

/**
 * 裴波那楔数列
 * @param i
 */
int fibonaci(int i)
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }
    return fibonaci(i - 1) + fibonaci(i - 2);
}