#include <stdio.h>
#include <stdlib.h>

// 将整数转换为枚举
enum day
{
    saturday,
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday

} workday;

int main()
{
    int a = 1;
    enum day weekend;
    weekend = (enum day)a;
    printf("weekend:%d", weekend);
    return 0;
}
