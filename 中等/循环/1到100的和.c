/*
用循环结构编程计算下列算式的值
sum=1+2+3+4+5+… +100
要求: 
**输入提示信息为：无输入提示信息和输入数据
**输出格式为："sum=%d\n"
 */
#include <stdio.h>
  
int main()
{
    int sum=0,i;
    for(i=1;i<=100;i++)
    {
        sum+=i;
    }
    printf("sum=%d\n",sum);
    return 0;
}