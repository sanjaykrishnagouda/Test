#include<stdio.h>

/* getMissingNo takes array and size of array as arguments*/
int getMissingNo(int a[])
{
    int i;
    int x1 = 0;
    int x2 = 0;
    int n=sizeof(a)/sizeof(int);

    for (i =0; i<=n; i++)
        x1 = x1^a[i];

    for ( i = a[0]; i <= n+1; i++)
        x2 = x2^i;

    return (x1^x2);

}

/*program to test above function */
int main()
{
    int a[] = {2,4,5,6,7,8};
    int m=getMissingNo(a);
printf("%d",m);

}
