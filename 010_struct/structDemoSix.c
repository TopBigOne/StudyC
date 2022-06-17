
#include <stdio.h>
#include <string.h>
/*
* 位域
 * 典型的实例：
 * 1：用 1 位二进位存放一个开关变量，只有 0 和 1 两种状态；
 * 2：读取外部文件格式--可以读取非标准的文件格式。例如 9 位的整数；
 * 
 *   struct 位域结构名 
 *   {
 *
 *   位域列表
 *
 *   };
*/

struct bs
{
    int a : 8;
    int b : 2;
    int c : 6;
};

// 说明： data 作为 bs 变量，共占2 个字节，其中 a 占 8 位，b 占 2 位，c 占 6 位

struct packed_struct
{
    // 在这里，packed_struct 包含了 6 个成员：四个 1 位的标识符 f1..f4、一个 4 位的 type 和一个 9 位的 my_int。
    unsigned int f1 : 1;
    unsigned int f2 : 1;
    unsigned int f3 : 1;
    unsigned int f4 : 1;
    unsigned int f5 : 1;
    unsigned int type : 4;
    unsigned int my_int : 9;
};

struct bc2
{

    unsigned a : 4;
    unsigned : 4;   /* k空域*/
    unsigned b : 4; /*从下一单元开始存放*/
    unsigned c : 4;
    // a 占第一字节的 4 位，后 4 位填 0 ，表示不使用，b 从第二个字节开始，占 4 位，c 占 4 位
};

int main()
{
    struct bs
    {
        unsigned a : 1;
        unsigned b : 3;
        unsigned c : 4;

        /* data */
    } bit, *pbit;
    bit.a = 1; /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.b = 7;
    bit.c = 15;
    printf("%d,%d,%d\n", bit.a, bit.b, bit.c); /* 以整型量格式输出三个域的内容 */
    pbit = &bit;

    pbit->a = 0; /* 用指针方式给位域 a 重新赋值，赋为 0 */
    pbit->b &= 3; /* 使用了复合的位运算符 "&="，相当于：pbit->b=pbit->b&3，位域 b 中原有值为 7，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3） */
    pbit->c |= 1; /* 使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 15 */
    printf("%d,%d,%d\n", pbit->a, pbit->b, pbit->c); /* 用指针方式输出了这三个域的值 */
    return 0;
}
