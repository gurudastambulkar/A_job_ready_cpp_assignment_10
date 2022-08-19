#include<stdio.h>
#include<conio.h>
int num(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(num(x)==1)
        printf("%d is an even number",x);
    else
        printf("%d is an odd number",x);
    return 0;
}
int num(int a)
{
    if(a%2==0)
        return 1;
    else
        return 0;
}
