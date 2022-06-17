
#include <stdio.h>
#include <math.h>
/*
 预处理器 不是编译器的组成部分，是编译过程中一个单独的步骤；
简而言之，C 预处理器只不过是一个文本替换工具而已。
所有的预处理器的命名都是以# 开头，它必须是一个非空字段，为了增强可读性，预处理器指令从第一个开始；
|------------|---------------------------------------------------------------|
|   指令      |                         描述                                  |
|------------|---------------------------------------------------------------|
|#define	 |   定义宏                                                       |
|#include	 |   包含一个源代码文件                                             |
|#undef	     |   取消已定义的宏                                                |
|#ifdef	     |   如果宏已经定义，则返回真                                        |
|#ifndef	 |   如果宏没有定义，则返回真                                        |
|#if	     |   如果给定条件为真，则编译下面代码                                 |
|#else	     |   #if 的替代方案                                               |
|#elif	     |   如果前面的 #if 给定条件不为真，当前条件为真，则编译下面代码          |
|#endif	     |   结束一个 #if……#else 条件编译块                                 |
|#error	     |   当遇到标准错误时，输出错误消息                                   |
|#pragma	 |   使用标准化方法，向编译器发布特殊的命令到编译器中                    |
-------------|---------------------------------------------------------------|
 */

// 告诉 CPP 把所有的 MAX_ARRAY_LENGTH 替换 为 20； 使用
#define MAX_ARRAY_LENGTH 20

// 告诉 CPP 取消已经定义的 FILE_SIZE ,并定义它为 42；
#undef FILE_SIZE
#define FILE_SIZE 42
/*
// 告诉 CPP，只有当 MESSAGE 未定义时，才定义 MESSAGE;
#ifdef MESSAGE
#define MESSAGE "you wish！"
#endif*/

// 告诉 CPP 如果定义了 DEBUG ，则执行处理语句。在编译时，如果向 gcc 编译器传递了-DDEBUG 开关量，这个指令就非常有用，
#ifdef DEBUG
/* Your debugging statement here... */
#endif

/*
********************* 预定义宏 start********************************************
ANSI C 定义了许多宏。在编程中您可以使用这些宏，但是不能直接修改这些预定义的宏。
------------|-----------------------------------------------------
宏	        |              描述
------------|------------------------------------------------------
__DATE__	| 当前日期，一个以 "MMM DD YYYY" 格式表示的字符常量。
__TIME__	| 当前时间，一个以 "HH:MM:SS" 格式表示的字符常量。
__FILE__	| 这会包含当前文件名，一个字符串常量。
__LINE__	| 这会包含当前行号，一个十进制常量。
__STDC__	| 当编译器以 ANSI 标准编译时，则定义为 1。
------------|-----------------------------------------------------

********************* 预定义宏 end*********************************************
 */

/*
 ********************* 预处理器运算符 start ********************************************
 * C 预处理器提供了下列的运算符来帮助您创建宏：
*
*宏延续运算符（\）
*一个宏通常写在一个单行上。但是如果宏太长，一个单行容纳不下，则使用宏延续运算符（\）
* #define  message_for(a, b)  \
*  printf(#a " and " #b ": We love you!\n")
 *
 ********************* 预处理器运算符 end ********************************************
 *
 * */

#define message_for(a, b) \
    printf(#a " and " #b ": we love you!\n")

// 标记粘贴运算符（##)-->宏定义内的标记粘贴运算符（##）会合并两个参数。它允许在宏定义中两个独立的标记被合并为一个标记
#define token_poster(n) printf("token" #n " = %d", token##n)

// #if !defined (MESSAGE)  和ifndef MESSAGE 是一个意思
#ifndef MESSAGE
#define MESSAGE "you wish"
#endif

// 参数化的宏,,哈哈哈用宏求平方
#define square(x,y) (pow(x, y))

/*
*测试预定义宏
 */
void testPreMacros();
void test_message_for();
void showSplitLine();
void test_token_poster();
void test_defined();
void test_square();
int main(int argc, char const *argv[])
{

    testPreMacros();
    showSplitLine();
    test_message_for();
    showSplitLine();
    test_token_poster();
    showSplitLine();
    test_defined();
    showSplitLine();
    test_square();

    return 0;
}

void showSplitLine()
{
    printf("-----------华丽的分割线--------------------\n");
}

void testPreMacros()
{
    printf("File:%s \n", __FILE__);
    printf("Date :%s \n", __DATE__);
    printf("Time :%s \n", __TIME__);
    printf("Line :%d \n", __LINE__);
    printf("ANSI :%d \n", __STDC__);
}
void test_message_for()
{
    message_for(Carole, Debra);
}

void test_token_poster()
{
    int token34 = 40;
    token_poster(34);
}

void test_defined()
{
    printf("Here is the message : %s\n", MESSAGE);
}
void test_square()
{
    printf("6 的平方 : %f\n", pow(6, 2));
    printf("5 的平方 : %f\n", square(5,2));
}