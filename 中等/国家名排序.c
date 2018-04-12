/*
奥运参赛国出场次序：
输入奥运会参赛国国名，并按照字典序对其进行排序。
要求：参赛国数量不超过150个，每个国家的名字不超过9个字符。
提示：‘\0’占一个字符。
 */
#include <string.h>
#include <stdio.h>
 
#define N 150
#define MAX_LEN 10
void SortString(char str[][MAX_LEN], int n);
 
int main()
{
    int i, n;
    char name[N][MAX_LEN]; 
    
    
    printf("How many countries?");
    scanf("%d",&n);     
    getchar();
    printf("Input their names\n");
    for(i=0;i<N;i++)
    {
        strcpy(name[i],"");
    }
    for(i=0;i<n;i++)
        gets(name[i]);      
 
    SortString(name, n);   
    printf("Sorted results:\n");
    for(i=0;i<n;i++)
    {
        puts(name[i]);      
    }
    return 0;
 
}
 
void SortString(char str[][MAX_LEN], int n)     
{
    int i,j;
    char temp[MAX_LEN];
 
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(strcmp(str[j],str[j-1])<0)        
            {
                strcpy(temp,str[j-1]);
                strcpy(str[j-1],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
}
