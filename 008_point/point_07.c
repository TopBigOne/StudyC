/* 
指针类型：
    int*
    float*
    char*
    类/结构体：
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch = 'a';
    int num = 97;
    printf("ch  的地址：%p\n", &ch);
    printf("num 的地址：%p\n", &num);

    return 0;
}
