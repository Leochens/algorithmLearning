/*
已知立方和不等式为 13+ 23+…+ m3< n 对指定的n值，试求满足上述立方和不等式的m的整数解。 

输入提示信息："Please enter n:" 

输入格式："%ld" 

输出格式："m<=%1d\n"
 */
#include <stdio.h>
   
int main()
{
    printf("Please enter n:");
    int i,sum=0;
    int n,m=0;
    scanf("%d",&n);
    while(sum<n)
    {   
        m++;
        sum+=m*m*m;
        
    }
     
    printf("m<=%1d\n",m-1);
    return 0;
}