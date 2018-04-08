/*
利用求阶乘函数Fact()，编程计算并输出从1到n之间所有数的阶乘值。
**输入格式要求："%u"  提示信息："Input n(n>0):"
**输出格式要求："%d! = %lu\n"
程序运行示例如下：
Input n(n>0):10
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
6! = 720
7! = 5040
8! = 40320
9! = 362880
10! = 3628800
 */
#include <stdio.h>
int Fact(int n)
{
    int i,j,x;
    for(i=1;i<=n;i++)
    {
        x=1;
        for(j=1;j<=i;j++)
        {
            x*=j;    
        }
        printf("%d! = %lu\n",i,x);
    }
    
    return 0;
}
main()
{
    printf("Input n(n>0):");
    int n;
    scanf("%d",&n);
    Fact(n);
    return 0;
}