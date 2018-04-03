/*
小明今年12岁，他母亲比他大24岁。编写一个程序计算小明的母亲在几年后比小明的年龄大一倍，那时他们两人的年龄各是多少？
**输出格式要求："year=%d\n" "mingAge=%d\n" "motherAge=%d\n"
程序运行示例如下：
year=12
mingAge=24
motherAge=48
 */
#include <stdio.h>

main()
{
    int c,p;
    int x=12;
    for(c=12,p=36;c<100&&p<100;c++,p++)
    {
            if(p==2*c)
            {
                printf("year=%d\nmingAge=%d\nmotherAge=%d\n",c-12,c,p);
            }
    }
}