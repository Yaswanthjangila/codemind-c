#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int a[N],s=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a[i]%2==1)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}