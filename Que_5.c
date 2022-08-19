#include<stdio.h>
void odd(int);
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    odd(x);
    return 0;
}
void odd(int N)
{
    int i;
    for(i=1;i<=N;i++)
        printf("%d ",i*2-1);
}
