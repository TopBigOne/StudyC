
#include <stdio.h>
#include <string.h>
/*
 struct
{
  unsigned int widthValidated;
  unsigned int heightValidated;
} status;
这种结构体会占 8 字节； 但是每个变量中，只会存储 0 和 1，于是 c 提供了更好的利用空间的方式；

struct
{
    unsigned int widthValidated:1;
    unsigned int heightValidated:1;
} status;

这样写，status 就占用 4 个字节，但是只有 2 位被用来cun
 */
/* 定义简单的结构 */
struct
{
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

/* 定义位域结构 */
struct
{
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status2;

int main()
{
    printf("Memory size occupied by status1 : %lu\n", sizeof(status1));
    printf("Memory size occupied by status2 : %lu\n", sizeof(status2));
    return 0;
}
