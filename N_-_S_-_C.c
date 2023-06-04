#include<stdio.h>
int main()
{
    int a,b,sq,c,i;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
       sq=(i*i);
       c=(i*i*i);
       printf("%d %d %d
",i,sq,c);
    }
}