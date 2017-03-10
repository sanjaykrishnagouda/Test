#include<stdio.h>
int gcd(int u,int v)
{
        int t;
        while(u>0){
            if(u<v){
                t=u;
                u=v;
                v=t;
            }
            u=u%v;
            printf("u=%d \n v=%d \n",u,v);
        }
        return v;
    }
main(){
int x=0,y=0;
printf("enter a number \n");
scanf("%d",&x);
printf("enter another number\n");
scanf("%d",&y);
printf("%d %d is %d",x,y,gcd(x,y));
}
