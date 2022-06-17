/*
 * C 语言不提供对错误处理的直接支持，但是作为一种系统编程语言，它以返回值的形式允许您访问底层数据。
 * 在发生错误时，大多数的 C 或 UNIX 函数调用返回 1 或 NULL，同时会设置一个错误代码 errno，
 * 该错误代码是全局变量，表示在函数调用期间发生了错误。您可以在 errno.h 头文件中找到各种各样的错误代码。
 *所以，C 程序员可以通过检查返回值，然后根据返回值决定采取哪种适当的动作。开发人员应该在程序初始化时，
 * 把 errno 设置为 0，这是一种良好的编程习惯。0 值表示程序中没有错误。
 *--------------------------------------------------------------------------------
 *
 *   C 语言提供了 perror() 和 strerror() 函数来显示与 errno 相关的文本消息。
 *--------------------------------------------------------------------------------
 *   rrno、|perror() | strerror()
 *--------------------------------------------------------------------------------
 *   perror() :函数显示您传给它的字符串，后跟一个冒号、一个空格和当前 errno 值的文本表示形式。
 *--------------------------------------------------------------------------------
 *   strerror() 函数，返回一个指针，指针指向当前 errno 值的文本表示形式。
 *--------------------------------------------------------------------------------
 * */

#include "stdio.h"
#include "errno.h"
#include "string.h"
#include "stdlib.h"

void test_one();

extern int errno;
void test_two();
void test_three();
int main()
{

    test_one();
    test_two();
    test_three();

    return 0;
}

void test_one()
{
    FILE *pf;
    int errnum;
    pf = fopen("unexist.txt", "rb");

    if (pf == NULL)
    {
        errnum = errno;
        fprintf(stderr, "错误号：%d\n", errno);
        perror("通过 operror 输出错误");
        // 使用 stderr 文件流来输出所有的错误。
        fprintf(stderr, "打开文件错误：%s\n", strerror(errnum));
    }
}

/**
 * 被零除的错误
 */
void test_two()
{
    int dividend = 20;
    int divisor = 5;
    int quotient;

    if (divisor == 0)
    {
        fprintf(stderr, "除数为 0 退出运行....\n");
        exit(-1);
    }

    quotient = dividend / divisor;
    fprintf(stderr, "quotient 变量的值为：%d\n", quotient);
}

/**
 *程序退出状态: EXIT_SUCCESS and EXIT_FAILURE
 * 程序成功执行完一个操作正常退出的时候会带有值 EXIT_SUCCESS。在这里，EXIT_SUCCESS 是宏，它被定义为 0。
 * 如果程序中存在一种错误情况，当您退出程序时，会带有状态值 EXIT_FAILURE，被定义为 -1。所以，上面的程序可以写成：
 */
void test_three()
{
    int dividend = 20;
    int divisor = 5;
    int quotient;

    if (divisor == 0)
    {
        fprintf(stderr, "除数为 0 退出运行....\n");
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "quotient 变量的值为：%d\n", quotient);
    exit(EXIT_SUCCESS);
}