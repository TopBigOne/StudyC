#include "stdio.h"
// auto 自动变量,自动存储
int main()
{
    // 原始 x
    int x = 30;
    printf("x in outer block   : %d at %p\n", x, &x);
    {
        // 新的x，隐藏了原始的 x；
        int x = 77;
        // 打印 77
        printf("x is inner block : %d at %p\n", x, &x);
    }
    // 依旧是 30
    printf("x in outer block : %d at %p\n", x, &x);
    while (x++ < 33)
    {                // 原始的x；
        int x = 100; // 新的 x，隐藏了原始的 x；
        printf("x in while loop:%d at %p\n", x, &x);
    }

    printf("x in outer block : %d at %p ", x, &x);
}