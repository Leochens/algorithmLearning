/*
猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第10天早上再想吃时，见只剩一个桃子。求第一天共摘了多少桃子。
**输出格式要求："桃子总数=%d\n"
程序运行示例如下：
桃子总数=xxxx
 */

#include <stdio.h>
 
int main()
{
    int x=1;
    int i;
    for(i=1;i<=10;i++)
    {
       x=(x+1)*2;
    }
     
    printf("桃子总数=%d\n",x);
     
    return 0;
}