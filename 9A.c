#include<stdio.h>
int main()
{
    int y,w,i,j,n;
    scanf("%d%d",&y,&w);
    if(y>=w){
        n=0;
        for(i=y;i<=6;i++){
            n++;
        }
    }
    else{
        n=0;
        for(i=w;i<=6;i++){
            n++;
        }
    }
    //printf("%d",n);
    if(n==1)
        printf("1/6\n");
     if(n==2)
        printf("1/3\n");
     if(n==3)
        printf("1/2\n");
     if(n==4)
        printf("2/3\n");
     if(n==5)
        printf("5/6\n");
     if(n==6)
        printf("1/1\n");
    return 0;
}
