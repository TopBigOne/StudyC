#include <stdio.h>
#include <string.h>
/*
* 共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。
*### 定义共用体####
    union [union tag]
    {
    member definition;
    member definition;
    ...
    member definition;
    } [one or more union variables];

union tag 是可选的，每个 member definition 是标准的变量定义，比如 int i; 或者 float f;
或者其他有效的变量定义。在共用体定义的末尾，最后一个分号之前，您可以指定一个或多个共用体变量，这是可选的。下面
*/

union Data // Data 变量存储一个整数，一个浮点数，一个字符串，在内存的相同位置，可以存储多个多种类型的书库
{

    int i;
    float f;
    char str[20];

} data;

int main()
{
    union Data data;
    printf("Memory size occupied by data: %lu\n", sizeof(data));
    printf("####################访问共用体成员####################\n");
    data.i = 10;
    data.f = 23.6;
    strcpy(data.str, "hello jar jar");
    
    printf("data.i %d \n", data.i);
    printf("data.f %f\n", data.f);
    printf("data.f %s\n", data.str);
    printf("###################以上输出：i和f 有值损坏,str能够完整的输出\n");
    printf("在同一时间用到同一成员时，才能保证正确输出：\n");
    data.i = 10;
    printf("data.i : %d\n", data.i);

    data.f = 220.5;
    printf("data.f : %f\n", data.f);

    strcpy(data.str, "C Programming");
    printf("data.str : %s\n", data.str);

    return 0;
}
