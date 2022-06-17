
#include "stdio.h"

void select_sort(int arr[], int len);
void test_one(int arr[], int len);
void test_two(int arr[], int len);
void swap(int *a, int *b);
void print_result(const int *arr, int len);
int main()
{

    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};

    // select_sort(arr, 14);
    //test_one(arr, 14);
    test_two(arr, 14);
    print_result(arr, 14);

    return 0;
}

void select_sort(int arr[], int len)
{
    printf("raw_dara:");
    for (int a = 0; a < len; a++)
    {
        printf("%d ", arr[a]);
    }
    printf("\n");

    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }

    print_result(arr, len);
}

void print_result(const int *arr, int len)
{
    printf("after sort: ");
    for (int a = 0; a < len; a++)
    {
        printf("%d ", arr[a]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void test_one(int arr[], int len)
{
    int i, j, min;
    for (i = 0; i < len - 1; i++)
    {
        min = i;
        for (j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void test_two(int arr[], int len)
{
    int i, j, min, temp;
    for (i = 0; i < len - 1; i++)
    {
        min = i;
        for (j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

// motivation to study....