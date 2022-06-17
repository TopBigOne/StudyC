#include <stdio.h>

void test_two();
void test_three();
int main()
{
    int sum = 17;
    int count = 5;
    double mean;
    // 强制类型转换运算符的优先级大于除法
    mean = (double)sum / count;
    printf(" value of mean %f \n", mean);
    test_two();
    test_three();
    return 0;
}

/* 
* 整数提升
 */
void test_two()
{
    int i = 17;
    char c = 'c'; /* ascii 99 */
    int sum;
    sum = i + c;
    printf("value of sum :%d \n", sum);
}

/* 
* 整数提升
 */
void test_three()
{
    int i = 17;
    char c = 'c'; /* ascii 99 */
    float sum;
    sum = i + c;
    printf("value of sum :%f \n", sum);
}