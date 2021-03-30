/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    a.c
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2021.03.30   23:21
 *-----------------------------------------------------------------------------
 * @Change:   2021.03.30
 *-----------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    fp = fopen("hello.c", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "fopen(): %s\n", strerror(errno));
        exit(1);
    }
    puts("OK!");
    exit(0);
}