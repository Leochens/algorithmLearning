/*
一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
**输出格式要求："the total of road is %f\n" "the tenth is %f meter\n"
程序运行示例如下：
the total of road is 299.609375
the tenth is 0.097656 meter
 */
#include <stdio.h>


int main()
{

    float h=100;
    int i;
    float d;
    float pre=100;
    for(i=1;i<10;i++)
    {
        d = pre/2.0; 
        h+=d*2;
        pre = d;
    }
    
    printf("the total of road is %f\n",h);
    printf("the tenth is %f meter\n",pre/2.0);
    return 0;
}