#include <stdio.h>

// 函数声明
int max(int num1, int);

int main()
{
    int a = 100;
    int b = 200;
    int ret;
    // 函数的 调用
    ret = max(a, b);
    printf("Max value is : %d\n", ret);
    return 0;
}

int max(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}
