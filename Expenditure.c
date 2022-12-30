#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int t=(x-(y*30));
    if(t>=y)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}