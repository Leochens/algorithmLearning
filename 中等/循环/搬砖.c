/*
（中国古典算术问题）某工地需要搬运砖块，已知男人一人搬3块，女人一人搬2块，小孩两人搬一块。问用45人正好搬45块砖，有多少种搬法？
**输出格式要求："men=%d,women=%d,child=%d\n"
 */
#include<stdio.h>
  
int main()
{
    int m,w,c;
    int ma,wa,ca;
    for(m=0;m<15;m++)
    {
        for(w=0;w<30;w++)
        {
            c = 45 -m-w;
            ma = m*3;
            wa = w*2;
            ca = c/2;
            if(ma+wa+ca==45&&m+w+c==45&&c%2==0)
            {
                printf("men=%d,women=%d,child=%d\n",m,w,c);
            }
        }
    }
      
}