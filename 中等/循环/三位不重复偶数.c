/*
编写程序求出用数字0至9可以组成多少个各位上没有重复数字的三位偶数。
****要求输入提示信息为：无
****输出格式要求为：%d\n

 */
#include <stdio.h>

int main()
{
    int i,j,k;
    int cnt=0;
    for(i=1;i<=9;i++)
        for(j=0;j<=9;j++)
            for(k=0;k<=9;k++)
            {
                if(i!=j&&i!=k&&j!=k)
                {
                    int x = i*100+j*10+k;
                    if(x%2==0)
                        cnt++;
                }
            }

    printf("%d\n",cnt);
    return 0;
}