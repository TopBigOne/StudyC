
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int bookId;
} book1, book2; // 定义在结构的末尾，最后一个分号之前，您可以指定一个或多个结构变量

// 在一般情况下，tag、member-list、variable-list 这 3 部分至少要出现 2 个。以下为实例：
struct
{
    int a;
    int b;
    double c;
} s1;

struct SIMPLE
{
    int a;
    char b;
    double c;
};
//用SIMPLE标签的结构体，另外声明了变量t1、t2、t3
struct SIMPLE t1, t2[20], *t3;

// 也可以用 typedef 创建新类型
typedef struct
{
    int a;
    char b;
    double c
} Simple2;
// 现在可以用 Simple2 作为类型声明新的结构体变量
Simple2 u1, u2[20], *u3;

// 结构体的声明，也可以包含其他结构体
struct COMPLEX
{
    char string[100];
    struct SIMPLE a;
};

// 此结构体的声明，包含了指向自己类型的指针
struct NODE
{
    char stirng[100];
    struct NODE *next_node;
};

struct B // 对结构体 B 进行不完整声明
    // 结构体A包含指向结构体 B 的指针
    struct A
{
    struct B *partner;
    // other members
};
// 结构体 B 中包含指向结构体 A 的指针，在 A 声明完后，B 也随之进行声明；
struct B
{
    struct A *partner;
};
