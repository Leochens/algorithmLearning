/*
假设人的心率为每分钟75下，写一个程序，询问用户的年龄（以年为单位），然后计算并输出该用户到目前为止的生命中已有的心跳总数。（不考虑闰年，假定一年均为365天）
**输入格式要求："%d" 提示信息："Please input your age: "
**输出格式要求："The heart beats in your life: %d"
 */

#include <stdio.h>
#include <math.h>
int main()
{
    printf("Please input your age: ");
    int x;
    scanf("%d",&x);
    int S = x*(75*60*24*365);
    printf("The heart beats in your life: %d",S);
    return 0;
}