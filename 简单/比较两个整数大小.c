/*
比较两个整数的大小。
**输入格式要求："%d%d"  提示信息："Enter integer X and Y:"
**输出格式要求："X>Y\n"  "X<Y\n"  "X=Y\n"
程序运行示例如下：
Enter integer X and Y:5 6
X<Y

 */

#include <stdio.h>
#include <math.h>
main()
{
    printf("Enter integer X and Y:");
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>y)
        printf("X>Y\n");
    else if(x<y)
        printf("X<Y\n");
    else
        printf("X=Y\n");

}

/*
使用单分支的条件语句编程，计算并输出两个整数的最大值。
**输入格式要求："%d,%d" 提示信息："Input a, b:"
**输出格式要求："max = %d\n"
程序运行示例如下：
Input a, b:3,5
max = 5




#include <stdio.h>

main()
{
    
    printf("Input a, b:");
    int a,b,max;
    scanf("%d,%d",&a,&b);
    if(a>b)
    {
        max =a;
    }else
    {
        max = b;
    }
    printf("max = %d\n",max);
}
 */
