/*
鸡兔同笼，共有98个头，386只脚，请用穷举法编程计算鸡、兔各多少只。
**输入提示信息格式要求：无输入数据
**输出格式要求："x=%d,y=%d\n"
注：不能使用指针、结构体、共用体、文件、goto、枚举类型进行编程，主函数不能使用int main和return 0。
 */

#include <stdio.h>

main()
{
    int j,t;
    for(j=0;j<98;j++)
    {
        for(t=0;t<98;t++)
        {
            if(j+t==98&&4*t+2*j==386)
            {
                printf("x=%d,y=%d\n",j,t);
            }
        }
    }
}