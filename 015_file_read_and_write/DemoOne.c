#include <stdio.h>

/* 
 创建，打开，关闭，关闭； 一个文件，无论死文本文件，还是二进制文件，都是代表一系列的字节。
 C 语言 提供了访问顶层的函数，也提供了底层（OS）调用处理存储设备的文件；
 1： 打开文件： FILE *fopen(const char *filename,const char *mode);
   在这里，filename 是字符串，用来命名文件，访问模式 mode 的值可以是下列值中的一个：
        模式	         描述
      |-----|------------------------------  
      |  r	|打开一个已有的文本文件，允许读取文件。
      |  w	|打开一个文本文件，允许写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会从文件的开头写入内容。如果文件存在，则该会被截断为零长度，重新写入。
      |  a  |打开一个文本文件，以追加模式写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会在已有的文件内容中追加内容。
      |  r+	|打开一个文本文件，允许读写文件。
      |  w+	|打开一个文本文件，允许读写文件。如果文件已存在，则文件会被截断为零长度，如果文件不存在，则会创建一个新文件。
      |  a+	|打开一个文本文件，允许读写文件。如果文件不存在，则会创建一个新文件。读取会从文件的开头开始，写入则只能是追加模式。
     -------|------------------------------     

        如果处理的是二进制文件，则需使用下面的访问模式来取代上面的访问模式：
        "rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"

2:关闭文件：int fclose(FILE *fp);
   如果成功关闭文件，fclose( ) 函数返回 0，
   如果关闭文件时发生错误，函数返回 EOF。这个函数实际上，会清空缓冲区中的数据，关闭文件，
   并释放用于该文件的所有内存。EOF 是一个定义在头文件 stdio.h 中的常量。

3: 写入文件：int fputc(int c,FILE *fp);
           函数 fputc() 把参数 c 的字符值写入到 fp 所指向的输出流中。如果写入成功，它会返回写入的字符，
           如果发生错误，则会返回 EOF。

           int fputs(const char *s,FILE *fp);
            把字符串 s 写入到 fp 所指向的输出流中。如果写入成功，它会返回一个非负值，如果发生错误，则会返回 EOF.

 */

int main()
{
    FILE *fp = NULL;
    fp = fopen("/Users/dev/Documents/CLion_Work/C_study/015_file_read_and_write/test.txt", "w+");
    // 将一段字符串，写到文件中去
    fprintf(fp, "This is testing for fprintf...\n");
    // 把字符写入流中最简单的函数
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
    return 0;
}