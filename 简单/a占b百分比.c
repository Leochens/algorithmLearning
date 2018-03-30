/*
写一个程序从键盘输入两个整数，然后显示第1个整数占第二个整数的百分比，保留到小数点后1位。例如输入5和40，程序输出结果如下：
   5 is 12.5 percent of 40 

**输入格式要求："%d%d" 提示信息："请输入两个整数："
**输出格式要求："%d is %.1f percent of %d"
 */
#include <stdio.h>

main()
{
    printf("请输入两个整数：");
    int a, b;
    scanf("%d%d", &a, &b);
    float p ;
    p = (float)a/b;
    printf("%d is %.1f percent of %d", a, p*100, b);//NOTE !! *100
}