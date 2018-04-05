/*
编程计算1!+2!+3!+4!+…+10!的值。
输入格式：无
输出格式："1!+2!+...+10! = %ld\n"
 */
#include<stdio.h>
 
int main()
{
    int i,j;
    int s=1,sum=0;
    for(i=1;i<=10;i++)
    {
        s=1;
        for(j=1;j<=i;j++)
        {
            s*=j;
        }
        sum+=s;
    }
 
    printf("1!+2!+...+10! = %ld\n",sum);
}