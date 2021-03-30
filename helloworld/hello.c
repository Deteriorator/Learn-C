/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    hello.c
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2021.03.30   22:49
 *-----------------------------------------------------------------------------
 * @Change:   2021.03.30
 *-----------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

//void main(void);
//void main(int argc, char **argv);  // char *argv[]
//int main(int argc, char **argv);
//int main(void);

// gcc -v                gcc 版本信息
// gcc -E src.c > src.i  预处理
// gcc -S src.i          编译
// gcc -c src.s          汇编
// gcc src.o -o src      链接

// gcc src.c
// gcc hello.c -Wall     all warning

int main(void) {
    int *p = NULL;
    p = malloc(sizeof(int));   // (int *)malloc(sizeof(int))
    if (p == NULL)
        exit(1);
    printf("Hello world!\n");
    exit(0);   // 结束当前进程
    // return 0;      // 结束当前函数
}
