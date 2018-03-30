#include <stdio.h>
unsigned int InputNumber(char ch);
int IsPrime(unsigned int n);
int PrimeSum(unsigned int m, unsigned int n);
int main()
{
    int m = 0,n = 0,sum = 0,i = 0;
    do
    {
        m = InputNumber('m');
        n = InputNumber('n');
    }while(m > n && printf("n must be not smaller than m! Input again!\n"));   //保证m<=n
    sum = PrimeSum(m,n);
    printf("sum of prime numbers:%d",sum);
    return 0;
}
unsigned int InputNumber(char ch)
{
    printf("Please input the number %c(>1):",ch);
    int x=1;
    while(scanf("%d",&x)==0||scanf("%d",&x)==-1||x<=1)
    {
        printf("The input must be an integer larger than 1\n");
        printf("Please input the number %c(>1):",ch);
    }

    return x;

}
int IsPrime(unsigned int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i!=0)
            return 0;
    }
    return 1;
}
int PrimeSum(unsigned int m, unsigned int n)
{
    int i=m;
    for(;i<n;i++)
    {
        if(IsPrime(i))
            printf("%d\n",i);
    }
}