#include "stdio.h"
#define SIZE 10

/* 数组元素之和 */
int sump(int *start, const int *end);
int main()
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    answer = sump(marbles, marbles + SIZE);
    printf("The total numbers of marbles is %ld.\n", answer);
    return 0;
}

int sump(int *start, const int *end)
{
    int total = 0;
    while (start < end)
    {
        total += *start;
        //指针向前移动
        start++;
    }

    return total;
}
