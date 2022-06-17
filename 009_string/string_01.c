
#include <stdio.h>
#include <string.h>
// 在 C 语言中，字符串实际上是使用 null 字符 '\0' 终止的一维字符数组。因此
char greeting[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
// 根据数组初始化规则
char greeting_2[] = "hello";
void testStrFunc();
int main()
{
    char greeting_3[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("Greeting message : %s\n", greeting_3);

    int str_length = strlen(greeting_3);
    printf("the length of str: %d \n", str_length);
    testStrFunc();

    return 0;
}

void testStrFunc()
{
    char str1[12] = "Hello";
    char str2[12] = "world";
    char str3[12];
    int len;
    // 复制  str1 到 str3
    strcpy(str3, str1);
    printf("str1 复制到 str3 %s\n：", str3);

    // 连接 str1 和 str2
    strcat(str1, str2);
    printf(" str1 连接到str2 ：%s \n:", str2);
}
