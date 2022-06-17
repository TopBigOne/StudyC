#include "stdio.h"
#include <stdlib.h>

enum color
{
    red = 1,
    green,
    blue,
    pink
};

enum color favorite_color;

int main()
{
    printf("请输入你喜欢的颜色：（1.red,2.green,3.blue）");
    scanf("%d", &favorite_color);
    // 输出结果
    switch (favorite_color)
    {
    case red:
        printf("你喜欢的是红色");
        break;
    case green:
        printf("你喜欢的是绿色");
        break;
    case pink:
        printf("你喜欢的是粉色");
        break;
    case blue:
        printf("你喜欢的是蓝色");
        break;

    default:
        printf("你没有选择颜色");
    }
    return 0;
}