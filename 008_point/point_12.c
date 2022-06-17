#include "stdio.h"
/* 指针操作*/
int main(void)
{
    int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;
    // assign an address to a pointer;
    ptr1 = urn;
    // ditto
    ptr2 = &urn[2];
    // the print result is : ptr1 = 0x7ffee0b51fb0,*ptr1=100,&ptr1 = 0x7ffee0b51fa0
    // dereference a pointer and take the address of a pointer
    printf("pointer value ,dereferenced pointer ,pointer address:\n");
    printf("ptr1 = %p,*ptr1=%d,&ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    // the result is :ptr1 + 4 = 0x7ffeecfa3fc0, *(ptr1 + 4) = 500
    // pointer addition
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));

    // increment a pointer;
    ptr1++;
    // the result is :ptr1 = 0x7ffeed5befb4,*ptr = 200,&ptr1 = 0x7ffeed5befa0
    printf("\nvalue after ptr1++:\n");
    printf("ptr1 = %p,*ptr = %d,&ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    // decrement a pointer;
    // the result is :ptr2 = 0x7ffee8b7dfb8,*ptr2= 300 ,&ptr2 = &p0x7ffee8b7df98
    ptr2--;
    printf("\nvalue after ptr2--:\n");
    printf("ptr2 = %p,*ptr2= %d ,&ptr2 = &p%p\n", ptr2, *ptr2, &ptr2);

    // restore to original value.
    --ptr1;
    ++ptr2;
    printf("\nPointers reset to original value :\n");
    printf("ptr1=%p, ptr2 = %p\n", ptr1, ptr2);

    // subtract one pointer from another
    // the result is :ptr2 = 0x7ffee2c27fb8,ptr1 = 0x7ffee2c27fb0, ptr2 - ptr1 = 2
    printf("\nsubtract one pointer from another :\n");
    printf("ptr2 = %p,ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);

    // subtract an integer from a pointer
    // the result is :subtract an integer from pointer:ptr3 = 0x7ffeed476fc0,ptr3-2 = 0x7ffeed476fb8
    printf("\nsubtract an integer from pointer:");
    printf("ptr3 = %p,ptr3-2 = %p\n", ptr3, ptr3 - 2);

    return 0;
}
