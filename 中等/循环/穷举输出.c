/*
已知xyz+yzz=532，其中x，y，z都是数字（0-9），编写一个程序求出x，y，z分别代表什么数字。
**输出格式要求："x=%d,y=%d,z=%d"
 */

#include <stdio.h>
  
int main()
{
    int x,y,z;
    for(x=0;x<=9;x++)
        for(y=0;y<=9;y++)
            for(z=0;z<=9;z++)
                if(x*100+y*10+z+y*100+z*10+z==532)
                    printf("x=%d,y=%d,z=%d",x,y,z);
     
    return 0;
}