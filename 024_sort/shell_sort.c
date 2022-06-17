#include <stdio.h>
#include <math.h>
int *shell_sort(int arr[], signed int len);
int *test2(int arr[], signed int len);
int *test3(int arr[], signed int len);
int *test4(int arr[], signed int len);
int *test5(int arr[], signed int len);
void print_data(int arr[], int len);
int main()
{
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = sizeof(arr) / sizeof(arr[0]);

    print_data(arr, len);

    return 0;
}

void print_data(int arr[], int len)
{
    printf("排序前：");

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n排序后：");

    //  int *result = shell_sort(arr, len);
    //  int *result = test2(arr, len);
    //  int *result = test3(arr, len);
    //  int *result = test4(arr, len);
    int *result = test5(arr, len);

    for (int i = 0; i < len; i++)
    {
        printf("%d ", result[i]);
    }
}

int *shell_sort(int arr[], signed int len)
{
    int gap, i, j;
    int temp;
    for (gap = len >> 1; gap > 0; gap = gap >> 1)
    {
        for (i = gap; i < len; i++)
        {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
            {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
    }

    return arr;
}

int *test2(int arr[], int len)
{
    int gap, i, j;
    int temp;
    for (gap = len >> 1; gap > 0; gap = gap >> 1)
    {
        for (i = gap; i < len; i++)
        {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
            {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
    }
    return arr;
}

int *test3(int arr[], int len)
{
    int gap, i, j;
    int temp;
    for (gap = len >> 1; gap > 0; gap = gap >> 1)
    {
        for (i = gap; i < len; i++)
        {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
            {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
    }
    return arr;
}

int *test4(int arr[], int len)
{
    int gap, i, j;
    int temp;
    for (gap = len >> 1; gap > 0; gap = gap >> 1)
    {
        for (i = gap; i < len; i++)
        {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
            {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
    }
    return arr;
}

int *test5(int arr[], int len)
{
    int gap, i, j;
    int temp;
    for (gap = len >> 1; gap > 0; gap = gap >> 1)
    {
        for (i = gap; i < len; i++)
        {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
            {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
    }

    return arr;
}
