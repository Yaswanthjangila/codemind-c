#include<stdio.h>
int main()
{
    float n,b;
    scanf("%f",&n);
    if(n<=199)
    {
        b=n*1.20;
    }
    else
    if(n>=200 && n<400)
    {
        b=n*1.50;
    }
    else if(n>=400 && n<600)
    {
        b=n*1.80;
    }
    else if(n>=600)
    {
        b=n*2.00;
    }
    if(b>400)
    {
        b=b+b*0.15;
    }
    else
    {
        b=b+100;
    }
    printf("%.2f",b);
}