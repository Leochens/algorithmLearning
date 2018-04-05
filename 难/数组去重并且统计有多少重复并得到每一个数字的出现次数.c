#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(int *a,int *b){int t=*a;*a=*b;*b=t;}
void print(int *a,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("%d ",a[i]);
    }
    putchar('\n');
}
void BubbleSort(int* a,int len)
{
    int i,j;
    for(i=0;i<len-1;i++)
        for(j=1;j<len;j++)
            if(a[j]>a[j-1])
                swap(a+j,a+j-1);
}
/*统计重复个数*/
int get(int *a,int len)
{
    int i,j,cnt=0;
    for(i=1;i<len;i++)
    {
        if(a[i]==a[i-1])
        {
            cnt++;
        }else
            continue;
    }

    return cnt;
}

/*去掉重复的*/
/**
 * [strip description]
 * @param  a   [源数组]
 * @param  len [原数组长度]
 * @param  b   [目标数组]
 * @return     [目标数组长度]
 */
int strip(int *a,int len,int *b)
{
    int i,b_len=0;
    int flag[len]={0};

    for(i=0;i<len;i++)
    {
        if(flag[a[i]]==0)
        {
            b[b_len++]=a[i];
            flag[a[i]]=1;
        }        
    }
    return b_len;
}

int everyGet(int *a,int len,int *flag)
{
    int i;
    for(i=0;i<len;i++)
        flag[a[i]]++;
}

int main(int argc, char const *argv[])
{
    
    const int N = 14;
    int a[N]={2,5,9,8,8,4,7,1,1,2,2,2,2,4};
    //2 5 9 8 4 7 1
    print(a,N);
    BubbleSort(a,N);
    printf("%d\n", get(a,N));
    int b[N]={0};
    int len = strip(a,N,b);
    print(b,len);

    int flag[100]={0},i;
    everyGet(a,N,flag);
    for(i=0;i<100;i++)
    {
            flag[i]!=0?printf("index:%d;cnt=%d\n",i,flag[i]):0;
    }
    return 0;
}