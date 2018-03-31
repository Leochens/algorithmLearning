/*
从键盘任意输入一个年号，判断它是否是闰年。已知符合下列条件之一者是闰年：（1）能被4整除，但不能被100整除；（2）能被400整除。
输入提示信息："Input a year:"
输入格式："%d"
输出提示信息和格式：
"%d is a leap year!\n"
"%d is not a leap year!\n"
 */
#include <stdio.h>

main()
{
    
    printf("Input a year:");
    int y;
    scanf("%d",&y);
    if(y%4==0&&y%100!=0||y%400==0)
    {
        printf("%d is a leap year!\n",y);
    }else
    {
        printf("%d is not a leap year!\n",y);
    }
    
}