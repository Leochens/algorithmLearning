#include <stdio.h>
#include <math.h>
main()
{
    int x;
    printf("input data is:");
    //scanf("%d",&x);
    x=123;
    int b,s,g;
    b = x/100;
    s = x/10%10;
    g = x%10;
    
    printf("The sum of the total bit is %d\n", b+s+g );
}