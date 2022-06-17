/*  getChat() & putChat() */
#include "stdio.h"
int main()
{
    char str[100];
    printf("Enter a value:");
    // 从 stdin 读取一行到 str 所指向的缓冲区，直到一个终止符或EOF。
    gets(str);
    printf("\n you entered:");
    // 将字符串 str 和一个尾随的换行符写到 stdout;
    puts(str);
    return 0;
}
