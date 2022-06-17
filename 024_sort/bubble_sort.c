#include "stdio.h"
void bubble_sort();
int main()
{
    bubble_sort();
    return 0;
}

void bubble_sort()
{
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int)sizeof(arr) / sizeof(*arr);
    printf(" the raw data len: %d:\n", len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    int i, j, temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nthe result:\n");
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}