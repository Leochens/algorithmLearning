/*
用函数编写计算整数n的阶乘n！。
**输入格式要求："%d" 提示信息："Input m:"
**输出格式要求："%d! = %ld\n"
程序运行示例如下：
Input m:5
5! = 120
 */
#include <stdio.h>
int Fac(int n)
{
    if(n==1)
        return 1;
    return n*Fac(n-1);
}
main()
{
    printf("Input m:");
    int n;
    scanf("%d",&n);
    printf("%d! = %ld\n",n,Fac(n));
    return 0;
}