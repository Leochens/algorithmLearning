/*
从键盘输入一个大写英文字母，将其转换为小写字母后，再显示到屏幕上。
**输入格式要求：提示信息："Press a key and then press Enter:"
程序运行示例如下：
Press a key and then press Enter:B
b
 */
#include <stdio.h>

main()
{
    char x;
    printf("Press a key and then press Enter:");
    x = getchar();
    
    printf("%c", x+32);
}