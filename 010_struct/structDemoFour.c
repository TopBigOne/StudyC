
#include <stdio.h>
#include <string.h>
/*
结构体 作为函数参数
*/
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct Books book);

int main()
{
    struct Books Book1; /* 声明 Book1，类型为 Books */
    struct Books Book2; /* 声明 Book2，类型为 Books */

    /* Book1 详述 */
    strcpy(Book1.title, "C Programming");
    strcpy(Book1.author, "Nuha Ali");
    strcpy(Book1.subject, "C Programming Tutorial");
    Book1.book_id = 6495407;

    /* Book2 详述 */
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Zara Ali");
    strcpy(Book2.subject, "Telecom Billing Tutorial");
    Book2.book_id = 6495700;

    /* 输出 Book1 信息 */
    printBook(Book1);

    /* 输出 Book2 信息 */
    printBook(Book2);

    return 0;
}

void printBook(struct Books book)
{
    char title = (char)book.title;
    char author = (char)book.author;
    char subject = (char)book.subject;
    int book_id = book.book_id;
    printf("title %c,author %c,subject %c,book_id %d \n", title, author, subject, book_id);
}