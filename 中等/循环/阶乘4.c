/*
从键盘输入n，然后计算并输出1～n之间的所有数的阶乘值。
**输入格式要求："%d" 提示信息："Please enter n:"
**输出格式要求："%d! = %ld\n"
程序运行示例如下：
Please enter n:10
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
   
int main()
{
    printf("Please enter n:");
    int n;
    scanf("%d",&n);
    int i,r=1,j;
    for(i=1;i<=n;i++)
    {
        r=1;
        for(j=1;j<=i;j++)
        {
            r*=j;
        }
        printf("%d! = %ld\n",i,r);
    }
    return 0;
}