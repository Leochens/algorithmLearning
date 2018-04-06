/*
编写程序，打印1~999之间的全部同构数。所谓同构数，是指该数出现在它的平方数的右侧。如25^2=625，25出现在625的右端，25就是同构数。
***输入提示信息：无
***输入数据格式：无
***输出提示信息："Print all the isomorphism between 1-999:\n"
***输出数据格式："%d "
注：输出提示信息请放在循环体之外
 */
#include <stdio.h>
     
int main()
{
    printf("Print all the isomorphism between 1-999:\n");
     
    int i,x;
    for(i=1;i<=999;i++)
    {
        x=i*i;
        if(i==x%10||i==x%100||i==x%1000||i==x%10000||i==x%100000)
            printf("%d ",i);
    }
     
    return 0;
}