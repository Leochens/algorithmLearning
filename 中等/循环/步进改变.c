/*
编程计算下列算式的值
sum=1/(1*2*3) + 1/(3*4*5)+… +1/(99*100*101)
要求: 
(1)sum定义为float类型。
(2)
**输入提示信息为：无输入提示信息和输入数据
**输出格式为："sum=%f\n"
 */
#include <stdio.h>
 
int main()
{
    float sum=0,i;
    for(i=1;i<100;i+=2)
    {
        sum+=1.0/(i*(i+1)*(i+2));
    }
    printf("sum=%f\n",sum);
    return 0;
}