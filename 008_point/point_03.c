#include <stdio.h>

int main(int argc, char const *argv[])
{
    // c 中的 null 指针
    int *ptr = NULL;
    printf("ptr 的地址是：%p\n", ptr);
     return 0;
    //在大多数的操作系统上，程序不允许访问地址为 0 的内存，因为该内存是操作系统保留的。然而，内存地址 0 有特别重要的意义，
    //它表明该指针不指向一个可访问的内存位置。但按照惯例，如果指针包含空值（零值），则假定它不指向任何东西。
}
