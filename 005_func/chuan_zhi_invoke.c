#include <stdio.h>
// 函数：传值调用
void swap(int x, int y);
int main()
{
    int a = 100, b = 200;
    printf("交换前，a 的值： %d\n", a);
    printf("交换前，b 的值： %d\n", b);

    /* 调用函数来交换值 */
    swap(a, b);

    printf("交换后，a 的值： %d\n", a);
    printf("交换后，b 的值： %d\n", b);

    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
