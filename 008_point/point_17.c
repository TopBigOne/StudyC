#include "stdio.h"
/*处理二维数组函数*/
#define ROWS 3
#define CLOS 4
void sum_rows(int ar[][CLOS], int rows);
// 省略形参，没问题
void sum_clos(int ar[][CLOS], int);
int sum2d(int (*ar)[CLOS], int rows);

int main()
{
    int junk[ROWS][CLOS] = {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {12, 10, 8, 6}

    };
    sum_rows(junk, ROWS);
    sum_clos(junk, ROWS);
    printf("Sum of all element = %d \n", sum2d(junk, ROWS));

    return 0;
}

void sum_rows(int arr[][CLOS], int rows)
{
    int r;
    int c;
    int tot;
    for (r = 0; r < rows; r++)
    {
        tot = 0;
        for (c = 0; c < CLOS; c++)
        {
            tot += arr[r][c];
        }
        printf("row %d:sum = %d\n", r, tot);
    }
}

void sum_clos(int arr[][CLOS], int rows)
{
    int r;
    int c;
    int tot;
    for (c = 0; c < CLOS; c++)
    {
        tot = 0;
        for (r = 0; r < rows; r++)
        {
            tot += arr[r][c];
        }

        printf("col %d :sum = %d\n", c, tot);
    }
}

int sum2d(int ar[][CLOS], int rows)
{
    int r;
    int c;
    int tot = 0;
    for (r = 0; r < rows; r++)
    {
        for (c = 0; c < CLOS; c++)
        {
            tot += ar[r][c];
        }
    }

    return tot;
}
