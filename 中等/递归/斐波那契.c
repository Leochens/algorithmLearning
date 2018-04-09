/*
用递归方法编程计算Fibonacci数列的前N项。其中fib(0)=0,fib(1)=1,fib(n)=fib(n-1)+fib(n-2)。
**输入格式要求："%d" 提示信息："Input n:"
**输出格式要求："Fib(%d)=%d\n"
程序运行示例如下：
Input n:10
Fib(1)=1
Fib(2)=1
Fib(3)=2
Fib(4)=3
Fib(5)=5
Fib(6)=8
Fib(7)=13
Fib(8)=21
Fib(9)=34
Fib(10)=55
 */
int Fib(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else
        return Fib(n-1)+Fib(n-2);
}
main()
{
    printf("Input n:");
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("Fib(%d)=%d\n",i,Fib(i));
    return 0;
}