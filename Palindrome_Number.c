#include<stdio.h>  
int main()    
{    
    int q,r,num,m,i,s=0;   
    scanf("%d",&m);    
    for(i=1;i<=m;i++)
    {
        int q,r,num,i,s=0;
        scanf("%d",&num);
        q=num;
     
     while(q!=0)    
    {
        r=q%10;    
        s=(s*10)+r;    
        q=q/10;    
    }    
    if(s==num)  
    printf("True
");  
    else        
    printf("False
");
    }
}