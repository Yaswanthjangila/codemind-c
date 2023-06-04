#include<stdio.h>
int main()
{
    int n,c=0,k=0;
    scanf("%d",&n);
    int p=0;
    while(n!=0)
    {
        int r=n%10;
        if(r%2==0)
        {
            c++;
        }
        else 
        {
            k++;
        }
        n=n/10;
        p++;
    }
    if(k==p){
        printf("Odd");
    }
    else if(c==p)
    {
        printf("Even");
    }
    else
    {
        printf("Mixed");
    }
    
}