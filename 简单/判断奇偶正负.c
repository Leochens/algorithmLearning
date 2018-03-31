/*
编程判断输入整数x的正负性和奇偶性。
**输入格式要求："%d"  提示信息："Enter a integer:"
**输出格式要求："The integer is a plus even number\n"  "This integer is a plus odd number\n"
 "This integer is a minus even number\n"    "This integer is a minus odd number\n" 
 "This integer is zero.\n"
程序运行示例如下：
Enter a integer:-9
This integer is a minus odd number
 */

#include <stdio.h>

main()
{
    int x;
    printf("Enter a integer:");
    scanf("%d",&x);
    if(x>0)
    {
        if(x%2==0)
            printf("The integer is a plus even number\n");
        else
            printf("This integer is a plus odd number\n");
    }else if(x<0){
          if(x%2==0)
            printf("The integer is a minus  even number\n");
        else
            printf("This integer is a minus  odd number\n");
    }
    else
    {
        printf("This integer is zero.\n");
    }
    
   
   
}