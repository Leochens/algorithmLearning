/*
 绘制金字塔
要求用户从键盘输入一个大写字母，使用嵌套循环产生像下面这样的金字塔图案：
    A
   ABA
  ABCBA
 ABCDCBA

程序运行结果示例1：
Please input a capital:
D↙
    A
   ABA
  ABCBA
 ABCDCBA

程序运行结果示例2：
Please input a capital:
F↙
      A
     ABA
    ABCBA
   ABCDCBA
  ABCDEDCBA
 ABCDEFEDCBA

输入格式:"%c"
输出格式：
输入提示信息："Please input a capital:\n"
输出格式： "%c"
*/
#include <stdio.h>

int main()
{
    
    char i,j,k,t;
    char c;
    printf("Please input a capital:\n");
    scanf("%c",&c);
    for(i='A';i<=c;i++)
    {
        for(t=i;t<c;t++)
        {
            printf(" ");
        }
        for(j='A';j<=i;j++)
        {
            if(j==i)
            {
                printf("%c",j);
                for(k=j-1;k>='A';k--)
                {
                    printf("%c",k);
                }
            }
           else printf("%c",j);
        }
        putchar('\n');
    }
    
    return 0;
}
