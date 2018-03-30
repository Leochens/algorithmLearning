/*
编写一个程序，输入一个3位正整数，要求逆序输出对应的数。例如：输入123，则输出321。
**输入格式要求："%d" 提示信息："Please enter a positive integer: "
**输出格式要求："%d-->%d\n" 
程序运行示例如下：
Please enter a positive integer: 345
345-->543
 */

#include <stdio.h>

main()
{
    int x;
    printf("Please enter a positive integer:");
    scanf("%d",&x);
    int b,s,g;
    b = x/100;
    s = x/10%10;
    g = x%10;
    printf("%d-->%d\n",x,g*100+s*10+b);
    
}