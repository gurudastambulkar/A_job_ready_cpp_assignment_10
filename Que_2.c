#include<stdio.h>
#include<conio.h>
float SimInterest(float,float,float);
int main()
{
    float SI,P,R,T;
    printf("Enter Principal, Rate of interest and Time: ");
    scanf("%f%f%f",&P,&R,&T);
    SI=SimInterest(P,R,T);
    printf("Simple Interest is: %f",SI);
    return 0;
}
float SimInterest(float x,float y,float z)
{
    float si;
    si=((x*y*z)/100);
    return si;
}
