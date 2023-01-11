#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a=0;
    int b=1;
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        int c=a+b;
        a=b;
        b=c;
    }
}