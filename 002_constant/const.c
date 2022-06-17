#include <stdio.h>

int main()
{
    // const 修饰以后，不可变；
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';

    int area = LENGTH * WIDTH;
    printf("value of area :%d", area);
}