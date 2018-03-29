#include <stdio.h>
#include <string.h>
/**
 * 有n盏灯 编号为1~n 有k个人
 * 第一个人去把所有灯都打开，第2个人把所有2的倍数的灯灭掉(如果已经灭了就要打开)
 * 以此类推  等这k个人都完成灭灯或开灯动作后 
 * 求这n个灯的开关情况 
 */
#define MAX 1010
int m[MAX];
int main(int argc, char const *argv[])
{
    int n,k;
    //scanf("%d %d",&n,&k);    
    n=100,k=8;
    memset(m,0,sizeof(int)*MAX);
    int i,j;
    for(i=1;i<=k;i++)                       //遍历k个人
    {
        for(j=1;j<=n;j++)
        {
            if(j%i == 0)    m[j]=!m[j];     //找到是i倍数的j 并对第j个灯的状态取反
        }
    }
    for(i=1;i<=100;i++)
    {
        printf("%d ", m[i]);
    }
    return 0;
}