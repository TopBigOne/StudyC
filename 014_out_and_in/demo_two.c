/*  getChat() & putChat() */
#include "stdio.h"
int main()
{
    int c;
    printf("Enter a value: ");
    c = getchar();
    printf("\nyou entered:");
    // 将用户输入的字符c ，输出到屏幕上。
    putchar(c);
    printf("\n");
    return 0;
}
