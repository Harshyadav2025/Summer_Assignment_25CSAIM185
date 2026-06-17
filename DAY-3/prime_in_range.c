#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,b,i;
    printf("Enter the range:");
    scanf("%d%d",&a,&b);
    printf("Prime numbers between %d and %d are:\n",a,b);
    for(i=a;i<=b;i++)
    {
        if(prime(i)==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}