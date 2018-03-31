/*
用if-else语句编程根据输入的百分制成绩score，转换成相应的五分制成绩grade后输出。已知转换标准为：

0-59    E

60-69   D 

70-79   C 

80-89   B 

90-100  A

**输入格式要求："%d" 提示信息："Please enter score:"
**输出格式要求："Input error!\n" "%d——A\n"
程序运行示例1如下：
Please enter score:15
15——E
程序运行示例2如下：
Please enter score:85
85——B
 */

#include <stdio.h>
 
main()
{
     
    printf("Please enter score:");
    int x;
    scanf("%d",&x);
     
    if(x<0||x>100){
        printf("Input error!\n");
        return -1;
    }
     
    if(x>=90)
        printf("%d——A\n",x);
    else if(x>=80)
         printf("%d——B\n",x);
    else if(x>=70)
         printf("%d——C\n",x);
    else if(x>=60)
         printf("%d——D\n",x);
    else
        printf("%d——E\n",x);
}