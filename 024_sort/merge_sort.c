
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * https://www.cnblogs.com/plain8/p/8093052.html
 * */
int min(int i, int len);
void print_data(char string[20], int p_int[14], int len);
void merge_sort_two(int p_int[], int length);
void merge_sort(int arr[], int len);
int main()
{

    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = sizeof(arr) / sizeof(arr[0]);

    print_data("排序前：", arr, len);
    //  merge_sort(arr, len);
    merge_sort_two(arr, len);

    print_data("\n排序后：", arr, len);

    return 0;
}

void print_data(char string[20], int arr[], int len)
{
    printf("%s : ", string);
    for (int i = 0; i < len; i++)
    {
        printf("%d  ", arr[i]);
    }
}

int min(int x, int y)
{
    return x > y ? x : y;
}

void merge_sort(int arr[], int length)
{
    int step = 1;             //归并区间步长
    int l[length], r[length]; //gcc, 两个临时数组，分别保存待归并的两个区间
    while (step < length)
    {
        int start = 0; //归并区间的开始下标
        while (start < length - step)
        {
            //归
            int len_l, len_r; //左右待归并区间的长度
            len_l = len_r = step;
            memcpy(l, arr + start, sizeof(int) * len_l);
            if (start + 2 * step > length)
            {
                len_r = length - start - step;
            }
            memcpy(r, arr + start + step, sizeof(int) * len_r);
            //并
            int i = 0, j = 0, k = start;
            while (i < len_l && j < len_r)
            {
                arr[k++] = l[i] < r[j] ? l[i++] : r[j++];
            }
            while (i < len_l)
            {
                arr[k++] = l[i++];
            }

            start += 2 * step;
        }
        step *= 2;
    }
}

void merge_sort_two(int arr[], int length)
{
    int step = 1;
    int l[length], r[length];
    while (step < length)
    {
        int start = 0;
        while (start < length - step)
        {
            int len_l, len_r;
            len_l = len_r = step;
            memcpy(l, arr + start, sizeof(int) * len_l);
            if (start + 2 * step > length)
            {
                len_r = length - start - step;
            }
            memcpy(r, arr + start + step, sizeof(int) * len_r);
            // 并
            int i = 0, j = 0, k = start;
            while (i < len_l && j < len_r)
            {
                arr[k++] = l[i] < r[j] ? l[i++] : r[j++];
            }
            while (i < len_l)
            {
                arr[k++] = l[i++];
            }
            start += 2 * step;
        }
        step *= 2;
    }
}
