
#include "stdio.h"
void insert_sort_one(int arr[], int len);
int main(int argc, char const *argv[])
{

    return 0;
}

void insert_sort_one(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len; i++)
    {
        temp = arr[i];
        for (j = i; j > 0 && arr[j - 1] > temp; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[j] = temp;
    }
}
