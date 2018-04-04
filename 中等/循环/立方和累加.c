/*
编程计算自然数的立方和，直到立方和大于等于1000000时为止。统计并输出实际累加的项数。
 ***输入提示信息***：无
 ***输入数据格式***：无
 ***输出数据格式***："count = %d\n"
 */
#include <stdio.h>
#include <math.h>
  
int main()
{
    int i=0,sum=0;
    int cnt=0;
    while(sum<1000000)
    {
        sum+=i*i*i;
        i++;cnt++;
    }
    printf("count = %d\n",cnt-1);
    return 0;
}