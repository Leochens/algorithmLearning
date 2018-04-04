/*
编写一个程序，求满足以下条件的最大的n：1^2 + 2^2 + 3^2 + ... + n^2 <= 1000。
x^2表示x的平方。
**输出格式要求："n=%d\n"
 */
#include <stdio.h>
#include <math.h>
 
int main()
{
    int n=0,sum=0;
    while(sum<=1000)
    {
        n++;
        sum+=pow(n,2);
        
    }

    printf("n=%d\n",n-1);
    return 0;
}