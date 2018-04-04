/*
编程从键盘输入n值（10≥n≥3），然后计算并输出1! + 2! + 3! + … + n!。
**输入格式要求："%d" 提示信息："Input n:"
**输出格式要求："1!+2!+…+%d! = %ld\n"
程序运行示例如下：
Input n:10
1!+2!+…+10! = 4037913
 */
#include<stdio.h>
 
int main()
{
    int i,j;
    int s=1,sum=0;
    int n;
    printf("Input n:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        s=1;
        for(j=1;j<=i;j++)
        {
            s*=j;
        }
        sum+=s;
    }
 
    printf("1!+2!+…+%d! = %ld\n",n,sum);
}