#include "stdio.h"
int main(int argc, char const *argv[])
{
    // C 99中 C 语言的 指定初始化器
    int arr[6] = {[5] = 300};
    printf("result: %d", arr[5]);
    return 0;
}
 