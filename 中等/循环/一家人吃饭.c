/*
马克思手稿中有这样一道趣味数学题：男人、女人和小孩总计30个人，在一家饭店里吃饭，共花了50先令，每个男人各花3先令，每个女人各花2先令，每个小孩各花1先令，请用穷举法编程计算男人、女人和小孩各有几人，列出所有可能的组合。

输出提示信息："Man\tWomen\tChildren\n"  
输出格式： "%3d\t%5d\t%8d\n"
注：不允许使用goto语句
 */
#include<stdio.h>
 
int main()
{
    printf("Man\tWomen\tChildren\n");
    int m,w,c;
    int i,j,k;
    //scanf("%d%d%d",&m,&w,&c);
     
    for(m=0;m<30;m++)
    {
        for(w=0;w<30;w++)
        {
            for(c=0;c<30;c++)
            {
                if((m*3+w*2+c*1)==50&&m+w+c==30)
                {
                    printf("%3d\t%5d\t%8d\n",m,w,c);
                }
            }
        }
    }
     
}