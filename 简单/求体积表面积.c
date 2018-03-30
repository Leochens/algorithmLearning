/*

写一个程序计算长为11.5厘米，宽为2.5厘米，高为10厘米的盒子的体积和表面积。
程序说明：采用直接赋值，不用输入。
**输出格式要求"area=%.2f,volume=%.2f"
 */
#include <stdio.h>
#include <math.h>

int main()
{
    float l = 11.5,w = 2.5,h=10;
    float V = l*w*h;
    float S = (l*w+l*h+h*w)*2;
    
    printf("area=%.2f,volume=%.2f",S,V);
    return 0;
}