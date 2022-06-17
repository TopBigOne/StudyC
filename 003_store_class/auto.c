#include <stdio.h>

//  定义了变量/函数的范围（可见性）和生命周期。 这些说明符放置在他们所修饰的类型之前。
//  1： auto
//  2: register;
//  3:static;
//  4:extern;

void func1(void);
static int count = 10;
int main()
{
    while (count--)
    {
        func1();
    }
    return 0;
}
void func1()
{
    static int thing = 5;
    thing++;
    printf(" thing is %d,count is %d \n", thing, count);
}
