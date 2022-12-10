#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int a[N],s=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}