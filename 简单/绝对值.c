/*
编程求输入的整数的绝对值。
**输入格式要求："%d" 提示信息："input the value of x:"
**输出格式要求："|x|=%d\n"
程序运行示例如下：
input the value of x:68
|x|=68
 */
#include <stdio.h>
#include <math.h>
main()
{
    printf("input the value of x:")  ;
    int x;
    scanf("%d",&x);
    printf("|x|=%d\n",abs(x));
}