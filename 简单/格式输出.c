/*
写一个程序从键盘输入两个整数，然后显示输出第1个数除以第2个数的结果。例如，输入123和12，程序的输出结果格式如下：
        
           10 Remainder = 3
       ------
   12 )   123
  提示：使用求余运算符获得余数，使用整数除法获得商。

**输入格式要求："%d%d" 提示信息："请输入两个整数："
**输出格式要求：
"%13d Remainder = %d\n"
"       ------\n"
"%5d ) %5d"
 */
#include <stdio.h>

main()
{
    int x,y;
    printf("请输入两个整数：");
    scanf("%d%d",&x,&y);
    
    printf("%13d Remainder = %d\n",x/y,x%y);
    printf("       ------\n");
    printf("%5d ) %5d",y,x);
   
}