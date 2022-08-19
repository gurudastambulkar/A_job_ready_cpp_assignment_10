#include<stdio.h>
int digit(int,int);
int main()
{
    int x,y;
    printf("Enter a number and a one digit number: ");
    scanf("%d%d",&x,&y);
    if(digit(x,y)==1)
        printf("%d contains a given digit",x);
    else
        printf("%d does not contain a given digit",x);
    return 0;
}
int digit(int a,int b)
{
    int c;
    while(a!=0)
    {
        c=a%10;
        if(c==b)
            return 1;
        a=a/10;
    }
    if(a==0)
        return 0;
}
