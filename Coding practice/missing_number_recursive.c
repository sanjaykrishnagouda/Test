#include<stdio.h>
int missingElement(int a[],int l,int h){
if(l==h)
    return 000;
int mid=(l+h)/2;
if(a[mid+1]-a[mid]!=1)
    return(a[mid]+1);
if(a[mid]-a[mid-1]!=1)
    return(a[mid-1]+1);
if(a[mid]>=mid)
    return missingElement(a,mid+1,h);
if(a[mid]<mid)
    return missingElement(a,l,mid-1);
}
int main(){
int a[]={2,4,5,6,7,8};
int size=sizeof(a)/sizeof(int);////
int r=missingElement(a,0,size-1);
printf("missing number is %d",r);
return 0;
}
