#include "stdio.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "unistd.h"
//定义缓冲区大小
#define bufnum 10

int main(int argc, const char *argv[])
{
    //参数缺失
    // printf("%d",argc);
    if (argc !=3)
    {
        printf("call function failed!\n");
        return 0;
    }
    //打开待读取文件
    int f_read = open(argv[1], O_RDONLY);
    if (f_read == -1)
    {
        printf("open file failed!\n");
        return 0;
    }
    //打开待写入文件
    int f_write = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (f_write == -1)
    {
        printf("create file failed!\n");
        return 0;
    }

    //开始写入文件
    //定义缓冲区

    char buf[bufnum];
    int num;
    while ((num = read(f_read, buf, bufnum)) > 0)
    {
        write(f_write, buf, num);
    }

    close(f_read);
    close(f_write);
    return 0;
}
