#include<stdio.h>
void prime(int);
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    prime(num);
    return 0;
}
void prime(int x)
{
    int a=2;
    while(x!=1)
    {
        if(x%a==0)
        {
            printf("%d ",a);
            x=x/a;
        }
        else
            a++;
    }
}
