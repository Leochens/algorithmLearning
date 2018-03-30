/*
从键盘任意输入一个3位数n，编程计算n的每一位数字相加之和
（忽略整数前的正负号，使用数学函数fabs(n)）。
例如，输入n为123，则由123分离出百位1、十位2、个位3，
然后计算1+2+3=6，并输出6。
**输出提示信息"input data is:" 
**输入数据格式为："%d"
**输出格式要求："The sum of the total bit is %d\n"
 */

#include <stdio.h>
#include <math.h>
main()
{
    int x;
    printf("input data is:");
    scanf("%d",&x);
    
    int b,s,g;
    b = x/100;
    s = x/10%10;
    g = x%10;
    
    printf("The sum of the total bit is %d\n", b+s+g );
}