#include<stdio.h>
int main()
{
    long long i,t,n,m,y;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld",&m,&n);
        printf("Case %d: ",i+1);
        y=n-m+1;
        if((y%2==0)&&(m!=1))
            printf("Even\n");
        else if((y%2!=0)&&(m==1))
            printf("Even\n");
        else
            printf("Odd\n");
    }
    return 0;
}
