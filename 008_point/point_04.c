#include<stdio.h>
#include<time.h>
#include<stdlib.h>



// 从函数返回指针:C 语言不支持在调用函数时返回局部变量的地址，除非定义局部变量为 static 变量。

int* getRandom(){
    static int r[10];
    int i ;
    srand((unsigned)time(NULL));
    for( i = 0;i<10;i++){
        r[i] = rand();
        printf("%d\n",r[i]);

    }
    return r;
}
int main(){
    // 一个指向整数的指针，
    int *p;
    int i ;
    p = getRandom();
    for(int i = 0 ;i<10;i++){
        printf("*(p+[%d]):%d\n",i,*(p+i));
    }

    return 0;
}