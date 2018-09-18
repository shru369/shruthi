#include<stdio.h>
void main()
{

    int sum=0,n,i;
    printf("enter n:");
    scanf("%d",&n);
    scanf("%D",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    printf("SUM:%d",sum);
}
