/*
输入一些整数，编程计算并输出其中所有正数的和，输入负数时不累加，继续输入下一个数。输入零时，表示输入数据结束。要求最后统计出累加的项数。
输入提示信息："Input a number:"
输入格式："%d"
输出提示信息和格式："sum = %d, count = %d\n"
 */
#include <stdio.h>
    
int main()
{
    printf("Input a number:");
    int x,sum=0,cnt=0;
    scanf("%d",&x);
    while(x!=0)
    {
        if(x>0)
        {
            sum+=x;
            cnt++;
        }
        printf("Input a number:");
        scanf("%d",&x);     
    }
    printf("sum = %d, count = %d\n",sum,cnt);
    return 0;
}