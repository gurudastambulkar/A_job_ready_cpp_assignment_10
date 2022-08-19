#include<stdio.h>
int arrg(int,int);
int main()
{
    int i,s,a;
    printf("Enter number of items and number of items selected at a time ");
    scanf("%d%d",&i,&s);
    a=arrg(i,s);
    printf("There are %d arrangements one can make from %d items",a,i);
    return 0;
}
int arrg(int a,int b)
{
    int count=0;
    for(b;b<=a;a=a-b)
        count++;
    if(a!=0)
        count++;
    return count;
}
