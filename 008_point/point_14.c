#include "stdio.h"
/*
 * Relationship between Arraya and Pointers
 *
 */
void test_one();
void test_two();
int main()
{

    test_one();
    test_two();

    return 0;
}

void test_one()
{
    int i, x[6], sum = 0;
    printf("Enter a numbers:");
    for (i = 0; i < 6; ++i)
    {
        scanf("%d", x + i);

        // Equivalent to scanf("%d",&x[i]);
        sum += *(x + 1);
    }
    printf("Sum = %d ", sum);
}

void test_two()
{
    int x[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = &x[2];
    printf("*ptr = %d\n", *ptr);
    printf("*(ptr-1) = %d\n", *(ptr - 1));
    printf("*(ptr+1) = %d\n", *(ptr + 1));
}
