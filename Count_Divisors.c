#include<stdio.h>
int main()
{
    int a,b,c=0,d,e;
    scanf("%d%d%d",&a,&b,&d);
    for(e=a;e<=b;e++)
    {
        if(e%d==0)
        {
            c++;
        }
    }
    printf("%d",c);
}