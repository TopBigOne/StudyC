#include <stdio.h>

enum
{
    MON = 1,
    TUE = 2,
    WED = 3,
    THU = 4,
    FRI = 5,
    SAT = 6,
    SUN = 7
} day;

// 传递数组给函数，主要有 3 个形式：
// 形式 1：
void fun1(int *params)
{
}
// 形式 2：
void func2(int param[])
{
}
// 形式 3:
void func3(int param[])
{
}

int main()
{

    return 0;
}

//实例：
double getAverage(int arr[], int size)
{
    int i;
    double avg;
    double sum;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    avg = sum / size;
    return sum / size;
}