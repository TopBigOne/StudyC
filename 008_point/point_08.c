#include "stdio.h"
#define MONTHS 12

int main(int argc, char const *argv[])
{

    int day[MONTHS] = {31, 28, 31, 30,
                       31, 30, 31, 31,
                       30, 31, 30, 31};
    int index = 0;
    for (index = 0; index < MONTHS; index++)
    {
        //  day ,指针默认在 下标 0 处,用* 来解地址
        printf("Month%2d had %d days.\n", index + 1, *(day + index));
    }
    return 0;
}
