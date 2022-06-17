#include <stdio.h>
/*  
------读取文件-----
// 从 fp 所指向的输入文件中读取一个字符。返回值是读取的字符，如果发生错误则返回 EOF
int fgetc(FILE *fp);

// 从流中读取一个字符串
char *fgets(char*buf,int n,FILE *fp);
函数 fgets() 从 fp 所指向的输入流中读取 n - 1 个字符。它会把读取的字符串复制到缓冲区 buf，
并在最后追加一个 null 字符来终止字符串。

如果这个函数在读取最后一个字符之前就遇到一个换行符 '\n' 或文件的末尾 EOF，则只会返回读取到的字符，包括换行符。
您也可以使用 int fscanf(FILE *fp, const char *format, ...) 函数来从文件中读取字符串，
但是在遇到第一个空格和换行符时，它会停止读取。
 */
int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    char buff[255];
    fp = fopen("/Users/dev/Documents/CLion_Work/C_study/015_file_read_and_write/test.txt", "r");

    int buffer_size = 0;
    printf("size one raw %lu\n", sizeof(buff));
    // fscanf() 方法只读取了 This，因为它在后边遇到了一个空格。
    fscanf(fp, "%s", buff);
    printf("size two raw %lu\n", sizeof(buff));
    printf("1:%s \n", buff);
    printf("size three raw %lu\n", sizeof(buff));

    //  fgets() 读取剩余的部分，直到行尾
    fgets(buff, 255, fp);
    printf("size five raw %lu\n", sizeof(buff));
    printf("2:%s \n", buff);

    fgets(buff, 255, fp);
    printf("3:%s\n", buff);

    fclose(fp);
    return 0;
}
