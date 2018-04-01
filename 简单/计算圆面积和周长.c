/*
编程从键盘输入圆的半径r，计算并输出圆的周长和面积。圆周率取值3.14159.
**输入格式要求："%f" 提示信息："Input r:"
**输出格式要求："circum = %.2f\n" "area = %.2f\n"
程序运行示例如下：
Input r:3.5
circum = 21.99
area = 38.48
 */

#include <stdio.h>
#include <math.h>
int main()
{
    printf("Input r:");
    float r;
    scanf("%f",&r);
    float C = 3.14159 * 2 * r ;
    float S = 3.14159 * r * r;
    printf("circum = %.2f\n" "area = %.2f\n",C,S);
    return 0;
}



