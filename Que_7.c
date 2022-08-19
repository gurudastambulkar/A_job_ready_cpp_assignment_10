#include<stdio.h>
int combi(int,int);
int main()
{
    int n,r,a;
    printf("Enter items and number of items selected at a time ");
    scanf("%d%d",&n,&r);
    a=combi(n,r);
    printf("There are %d combinations one can make from %d items",a,n);
    return 0;
}
int combi(int x,int y)
{
    int count=0;
    for(y;y<=x;x=x-y)
        count++;
    if(x!=0)
        count++;
    return count;
}
