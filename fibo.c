#include<stdio.h>
void main()
{

    int f1,f2,f3=0,n,i;
    printf("enter limit:\n");
    scanf("%d",&n);
    f1=0;
    f2=1;
    f3=f1+f2;
    printf("fibonaci series are:%d,%d,%d",f1,f2,f3);
    for(i=1;i<=n;i++)
    {
        f1=i;
        f2=f3;
        f3=f1+f2;
        printf("%d",f3);
    }

}
