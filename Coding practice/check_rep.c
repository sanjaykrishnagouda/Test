#include<stdio.h>
#include<stdlib.h>
void pR(int arr[],int size){
int *c=(int *)calloc(sizeof(int),(size-2));
int i;
printf("repeating elements:");
for(i=0;i<size;i++){
    if(c[arr[i]]!=0)
        printf("%d",arr[i]);
    else
        c[arr[i]]+=1;
        }
}

int main(){
int arr[]={1,1,2,3,4,1,4,4,4,5,6,7,8};
int siz=(sizeof(arr)/sizeof(int));
pR(arr,siz);
}
