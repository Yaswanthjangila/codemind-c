#include<stdio.h>
int main()
{
    int n,srch;
    scanf("%d",&n);
    int a[n];
    for( int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&srch);
     int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==srch)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}