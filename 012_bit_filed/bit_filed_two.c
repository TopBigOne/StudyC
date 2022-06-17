#include <stdio.h>
#include <string.h>

struct
{
    unsigned int age : 3;
} Age;

int main()
{
    Age.age = 4;
    printf("Sizeof(Age) : %lu\n", sizeof(Age));

    Age.age = 7;
    printf("Sizeof(Age: %lu\n", sizeof(Age));
    Age.age = 8; // 8 的 二进制 1000 有 4 位，超出
    printf("Sizeof(Age: %lu\n", sizeof(Age));
    return 0;
}