/*
计算两个数的平方和
从键盘读入两个实数，编程计算并输出它们的平方和，要求使用数学函数pow(x,y)计算平方值，输出结果保留2位小数。
提示：使用数学函数需要在程序中加入编译预处理命令 #include <math.h>

以下为程序的输出示例：
Please input x and y:
1.2,3.4↙
result=13.00

输入格式:
"%f,%f"

输出格式：
输入提示信息："Please input x and y:\n"
输出格式："result=%.2f\n"
 */

#include <stdio.h>
#include <math.h>
int main()
{
    printf("Please input x and y:\n");
    float x,y;
    scanf("%f,%f",&x,&y);
    
    printf("result=%.2f\n",pow(x,2)+pow(y,2));
    return 0;
}