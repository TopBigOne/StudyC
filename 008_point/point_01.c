#include <stdio.h>

// 指针的算术运算
// 可以对指针进行四种算术运算：++、--、+、-
const int MAX = 3;
int main()
{
    int var[] = {10, 100, 200};
    int i, *ptr;
    // 指针中数组地址
    ptr = var;
    for (int i = 0; i < MAX; i++)
    {
        printf("储存地址 ：var[%d]=%x\n", i, ptr);
        printf("储存值  ：var[%d]=%d\n", i, *ptr);
        // 移动到下一个位置
        ptr++;
    }
    return 0;
}