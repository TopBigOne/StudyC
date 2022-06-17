#include "stdio.h"

int main(int argc, char const *argv[])
{
    int age = 19;
    int *p_age = &age;
    *p_age = 26; // 通过指针修改指向的内存数据
    printf("age = %d\n", age);
    printf("age = %d\n", *p_age);

    // 结果都是 26；

    return 0;
}
                                                                                                                                                                                                           