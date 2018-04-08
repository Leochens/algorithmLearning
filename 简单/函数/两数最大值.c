/*
用函数编程计算两整数的最大值，在主函数中调用该函数计算并输出从键盘任意输入的两整数的最大值。
**输入格式要求："%d,%d"  提示信息："Input a,b:"
**输出格式要求："max = %d\n"
程序运行示例如下：
Input a,b:5,8
max = 8

 */
#include <stdio.h>
int Max(int n,int m)
{
    return n>m?n:m;
}
main()
{
    printf("Input a,b:");
    int n,m;
    scanf("%d,%d",&n,&m);
    printf("max = %d\n",Max(n,m));
    return 0;
}