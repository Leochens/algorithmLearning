/*
求三角形面积。输入三角形的三个边长，计算三角形的面积。设三角形的三个边长分别为a、b、c，为简单起见，我们认为输入的三个边长数据是正确的，可以组成一个三角形。
**输入格式要求："%f,%f,%f"  提示信息："Enter 3 floats:"
**输出格式要求："area=%.2f\n"
程序运行示例如下：
Enter 3 floats:2,2,3
area=1.98
 */
#include <stdio.h>
#include <math.h>
int main()
{
    float x,y,z,P,S;
    printf("Enter 3 floats:"); 
    scanf("%f,%f,%f",&x,&y,&z);
    P = (x+y+z)/2;
    S = sqrt(P*(P-x)*(P-y)*(P-z));
    printf("area=%.2f\n",S);
    
    return 0;
}