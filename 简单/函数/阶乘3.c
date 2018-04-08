/*
利用求阶乘函数Fact()，编程计算并输出1! + 2! + …+ n!的值。
**输入格式要求："%u"  提示信息："Input n(n>0):"
**输出格式要求："sum = %lu\n"
 */
#include <stdio.h>
 
int Fac(int n)
{
    if(n==1)
        return 1;
    return n*Fac(n-1);
}
unsigned int Sum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=Fac(i);
    }
    return sum;
}
main()
{
    printf("Input n(n>0):");
    int n;
    scanf("%u",&n);
    printf("sum = %lu\n",Sum(n));
    return 0;
}