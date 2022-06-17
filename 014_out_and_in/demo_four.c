/*  getChat() & putChat() */
#include "stdio.h"
int main()
{
    char str[100];
    int i;
    printf("Enter a value:");
    // int scanf(const char *format, ...),从标准输入流 stdin 读取输入，并根据提供的 format 来浏览输入；
    scanf("%s %d", str, &i);
    // 把输出写入到标准输出流 stdout,并根据提供的格式产生输出
    printf("\n you entered: %s,%d",str,i);

    return 0;
}
