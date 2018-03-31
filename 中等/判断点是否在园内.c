/*
判断二维空间中的点，是否在圆内（输出：该点在圆内、该点在圆上、该点在圆外）。
**输入格式要求："%f,%f" "%f" "%f,%f" 提示信息："请输入圆的圆心坐标：" "请输入圆的半径：" "请输入要判断的点的坐标(x,y)："
**输出格式要求："该点在圆内\n" "该点不在圆内\n" "该点在圆上\n" 
程序示例运行如下：
请输入圆的圆心坐标：3.5,4.5
请输入圆的半径：6
请输入要判断的点的坐标(x,y)：5.5,7.8
该点在圆内
 */
#include <stdio.h>
#include <math.h>
main()
{
    float x,y;
    float r;
    float p,q;
    printf("请输入圆的圆心坐标：")  ;
    scanf("%f,%f",&x,&y);
    
    printf("请输入圆的半径：")  ;
    scanf("%f",&r);
    
    
    printf("请输入要判断的点的坐标(x,y)：");
    scanf("%f,%f",&p,&q);
    float d = sqrt(pow((x-p),2)+pow((y-q),2));
    if(d>r)
        printf("该点不在圆内\n");
    else if(d==r)
        printf("该点在圆上\n");
    else 
        printf("该点在圆内\n");
    
}