

typedef int BOOl;
#define TRUE  1;
#define FALSE 0;

BOOl isUsed = FALSE;

// type 的四种用法
// 1: 为基本类型定义新的类型名
typedef unsigned int COUNT;
typedef long double REAL;
// 在不支持long double的平台上改为
typedef double REAL;
// 甚至在double 不支持的平台上 ，改为：
typedef float REAL;

// 这样，在跨平台移植程序的时候，只需要修改一下typedef 的定义即可，而不用对其他源代码做任何修改，其实，标准中广泛地使用了这个技巧，
#ifdef _SIZE_T_DEFINED
#ifdef _WIN64
typedef unsigned __int64 size_t;
#else
typedef _W64 unsigned int size_t;
#endif
#define _SIZE_T_DEFINED
#endif

// 为自定义数据类型（结构体，共同体，和枚举类型）定义简洁的类型名称
struct Point
{
    double x;
    double y; 
    double z;
    
};
// 在调用Point时，我们可以这样
typedef struct tagPoint
{
     double x;
     double y;
     double z;
} Point;

struct tagNode
{
    char *pItem;
    struct tagNode *pNext;
};

typedef struct tagNode *pNode;

// 3: 为数组定义简洁的类型名称
typedef int INT_ARRAY_100[100] ;
INT_ARRAY_100 arr;

// 4: 为指针定义简洁的名称
typedef char* PCHAR;
PCHAR pa;

// 为指针声明typedef ,那么就在最终的typedef名称前加一个const，以使得该指针本身是常量




