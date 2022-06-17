#include "stdio.h"

const double PI = 3.14;
#define SIZE 5
void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);
int main()
{
    double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};
    printf(" The original dip array :\n");
    show_array(dip, SIZE);

    printf("The dip array after calling mult_array():\n");
    mult_array(dip, SIZE, 2.5);
    show_array(dip, SIZE);
    return 0;
}
/**
 * 显示数组的内容
 * @param ar
 * @param n
 */
void show_array(const double ar[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%8.3f", ar[i]);
    }
    putchar('\n');
}

/**
 * 将数组的没一个元素，都乘以一个相同的值
 * @param ar
 * @param n
 * @param mult
 */
void mult_array(double ar[], int n, double mult)
{
    int i;
    for (i = 0; i < n; i++)
    {
        ar[i] *= mult;
    }
}
