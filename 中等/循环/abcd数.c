/*
求具有abcd=(ab+cd)2性质的四位数。
**输入格式要求：提示信息："There are following numbers:\n"
**输出格式要求："%d  "
程序运行示例如下：
There are following numbers:
2025  3025  9801
 */

#include <stdio.h>
#include <math.h>
 
int main()
{
    printf("There are following numbers:\n");
    int i;

    for(i=1000;i<9999;i++)
    {

        
        if(i==(i/100+i%100)*(i/100+i%100))
        {
            printf("%d  ",i);
        }
    }
    
    
    
    return 0;
}