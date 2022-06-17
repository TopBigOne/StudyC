#include <stdio.h>
// 在C 语言中，枚举类型是被当做 int 或者 unsigned int 类型来处理的，所以按照 C 语言规范是没有办法遍历枚举类型的。
// 不过在一些特殊的情况下，枚举类型必须连续是可以实现有条件的遍历。
enum
{
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
} day;

// 以下枚举不连续，这种枚举无法遍历
enum
{
    ENUM_0,
    ENUM_10 = 10,
    ENUM_11

} no_loop;

int main()
{
    for (day = MON; day <= SUN; day++)
    {
        printf("枚举元素：%d\n", day);
    }
    return 0;
}
