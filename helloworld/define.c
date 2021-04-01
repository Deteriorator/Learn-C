/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    define.c
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2021.04.01   22:44
 *-----------------------------------------------------------------------------
 * @Change:   2021.04.01
 *-----------------------------------------------------------------------------
*/

#include <stdlib.h>
#include <stdio.h>

#define PI 3.14
#define ADD 2+3        //#define ADD (2+3)
#define MAX(a, b)   ((a) > (b) ? (a) : (b))
#define max(a, b)   \
    ({int A=a, B=b;((a) > (b) ? (a) : (b));})   //({typeof(a) A=a, B=b;((a) > (b) ? (a) : (b));})
//  标识常量
// 宏占用编译时间，节省运行时间
// 函数占用运行时间， 节省编译时间

// 存储类型： auto   static   register   extern(说明型)
//          auto: 默认，自动分配空间，自动回收空间。
//          register: (建议型)寄存器类型，只能定义局部变量，不能定义全局变量；大小
//                    有限制，只能定义32位(32机器)大小的数据类型，如double就不行，
//                    寄存器中没有地址，所以一个寄存器类型的变量无法打印出地址查看
//                    或使用。
//          static: 静态型，自动初始化为0值或空值，并且其变量的值有继承性
//          extern: 说明型， 意味着不能改变被说明的变量的值或类型 。

int main()
{
    int i = 5, j = 3;
    printf("%d\n", ADD * ADD);
    printf("%d\n", MAX(i, j));
    exit(0);
}


