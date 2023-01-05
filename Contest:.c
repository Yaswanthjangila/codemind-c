#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=(b*1+c*2);
    if(d>=a)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}