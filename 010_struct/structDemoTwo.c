
#include<stdio.h>
/*
结构体变量初始化
*/
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}book = {"C 语言","RUNOOB","编程语言"，123456};

int main(){
    printf("title : %s \nauthor:%s \n subject: %s \n book_id: %d\n", book.title, book.author, book.subject, book.book_id);
}