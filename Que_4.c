#include<stdio.h>
void num(int);
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    num(x);
    return 0;
}
void num(int N)
{
    int i;
    for(i=1;i<=N;i++)
        printf("%d ",i);
}
