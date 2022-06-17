/*
// 在内存中动态分配 num 个长度为 size 的连续空间，并将每一个字节都初始化为 0；
void *calloc(int num,in size);

// 释放 address 所指向内存块
void free(void *address);

//
void *malloc(int num);


void *realloc(void *address,int newsize);

void*  表示未确定类型的指针。
C/C++ : 类型可以通过类型转换
 */

void dynamicl_malloc_memory();
void resize_memory();
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    dynamicl_malloc_memory();
    printf("\n----------\n");
    resize_memory();
    return 0;
}

/**
 * 动态分配内存
 */
void dynamicl_malloc_memory()
{
    char name[100];
    char *description;
    strcpy(name, "Zata Ali");
    /* 动态分配内存 */
    description = (char *)malloc(200 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error-unable to allocate required memory");
    }
    else
    {
        strcpy(description, "Zara ali a DPS student in class 10th");
    }

    printf("Name = %s\n", name);
    printf("Description:%s\n", description);
}

/**
 *重新调整内存的大小和释放内存
 */
void resize_memory()
{
    char name[100];
    char *description;
    strcpy(name, "Zara ALi");
    /* 动态分配内存*/
    description = malloc(30 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error-unable to allocate required memory\n");
    }
    else
    {
        strcpy(description, "Zara ali a DPS student");
    }
    /*假设你想要储存更大的描述信息*/
    description = reallocf(description, 100 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error-unable to allocate required memory\n");
    }
    else
    {
        printf("Name = %s \n", name);
        printf("Description = %s \n", description);
    }
}