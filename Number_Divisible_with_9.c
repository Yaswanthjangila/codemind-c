#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%9==0)
    {
        printf("True");
    }
    else if(n%9!=0)
    {
        printf("False");
    }
}