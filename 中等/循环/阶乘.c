/*
编程从键盘输入n，然后计算并输出n! = 1 × 2 × 3 × … × n。 
**输入格式要求："%d" 提示信息："Please enter n:"
**输出格式要求："%d! = %ld\n"
程序运行示例如下：
Please enter n:10
10! = 3628800

 */
#include<stdio.h>

int main()
{
    printf("Please enter n:");
    int i=1,x,fac=1;
    scanf("%d",&x);
    
    for(i=1;i<=x;i++)
    {
        fac*=i;
    }
    printf("%d! = %ld\n",x,fac);
}