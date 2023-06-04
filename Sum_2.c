#include<stdio.h>
int main()
{
    int a,b,t,f,s=0;
    scanf("%d%d%d%d",&a,&b,&t,&f);
    for(int i=a;i<=b;i++)
    {
        if(i%t==0 && i%f!=0)
        {
            s=s+i;
        }
    }
    printf("%d",s);
}