/*
韩信点兵。韩信有一队兵，他想知道有多少人，便让士兵排队报数。
按从1至5报数，最末一个士兵报的数为1；
按从1至6报数，最末一个士兵报的数为5；
按从1至7报数，最末一个士兵报的数为4；
最后再按从1至11报数，最末一个士兵报的数为10。
你知道韩信至少有多少兵吗？
编写程序计算并输出结果。
**输出格式要求为"x = %d\n"。
 */
#include <stdio.h>


int main()
{
    int i=1;
    while(1)
    {
        if(i%5==1&&i%6==5&&i%7==4&&i%11==10)
        {
            printf("x = %d\n",i);
            return 0;
        }
        i++;
    }
    
   
}