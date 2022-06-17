#include "stdio.h"
int data[2] = {100, 109};
int moredata[2] = {300, 400};
/* 指针运算中的优先级*/
int main(void)
{
    int *p1, *p2, *p3;
    p1 = p2 = data;
    p3 = moredata;
    printf("*p1 = %d ,*p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
    printf("*p1++ = %d ,*++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
    printf("*p1 = %d ,*p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
    // 指针++
    printf("*(p1++) : %d ", *++p1);

    return 0;
}
