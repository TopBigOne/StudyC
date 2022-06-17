
int gdata1 = 10;
int gdata2 = 0;
int gdata3;

static int gdata4 = 11;
static int gdata5 = 0;
static int gdata6 ;

#include<stdio.h>
//  dumpsys procstats --hours 1 com.sixdays.truckerpath.dev

// top -n 1 |findstr com.sixdays.truckerpath.dev

int sumNums(int n) {
    int res;
    __asm(
        "movl %%edi, %%eax\n"
        "incl %%edi\n"
        "imull %%edi\n"
        "shrl $1, %%eax\n"
        :"=a"(res)
    );
    return res;
}


int main(){
    int a = 10;
    int b = 0;
    int c ;

    static int d = 11;
    static int e = 0;
    static int f ;
    int val = sumNums(5);
    printf("val %d",val);

    return 0;

}
