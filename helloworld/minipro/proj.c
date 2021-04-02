/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    proj.c
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2021.04.02   23:06
 *-----------------------------------------------------------------------------
 * @Change:   2021.04.02
 *-----------------------------------------------------------------------------
*/

#include <stdlib.h>
#include <stdio.h>

#include "proj.h"

//static int i = 100;

extern int i;

// 函数如果用static修饰，说明这个函数只能在该C文件中使用，防止该函数对外扩展
static void func(void)
{
    printf("[%s] : i = %d\n", __FUNCTION__, i);

    exit(0);
}

void call_func(void)
{
    func();
}