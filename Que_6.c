#include<stdio.h>
int fact(int);
int main()
{
    int num,f;
    printf("Enter a number ");
    scanf("%d",&num);
    f=fact(num);
    printf("Factorial is %d",f);
    return 0;
}
int fact(int N)
{
    int i,f=1;
    for(i=1;i<=N;i++)
        f=f*i;
    return f;
}
