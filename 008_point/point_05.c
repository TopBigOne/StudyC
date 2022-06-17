

// 函数指针： 指向函数的指针变量，函数指针可以像一般的函数一样，用户函数调用，传递参数。
// 函数指针变量声明：
//               tydef int (*func_ptr) (int,int ) //声明一个指向同样参数，返回值的函数指针类型
#include <stdio.h>

int max(int x, int y)
{
  return x > y ? x : y;
}

int main(void)
{

  /* p 是函数指针*/

  int (*p)(int, int) = &max; // &可以省略
  int a, b, c, d;

  printf("请输入三个数字:");
  scanf("%d %d %d ", &a, &b,

        &c);
  d = p(p(a, b), c);
  printf("最大的数字是：%d\n", d);

  return 0;
}