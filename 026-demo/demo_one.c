
// 乘法表
#include "stdio.h"
int main()
{
    printf("\n");
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int result = i * j;
            printf(" %d * %d = %d ", i, j, result);
        }
        printf("\n");
    }
}
