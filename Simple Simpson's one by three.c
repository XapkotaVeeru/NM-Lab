#include <stdio.h>
float functionRun(float x)
{
    return(1+x*x*x);
}
int main()
{
    float a,b,h,I;
    printf("enter the upper and lower limits");
    scanf("%f %f",&b,&a);
    h=(b-a)/2;
    I=(h/3)*(functionRun(a)+ functionRun(b)+ 4*(functionRun((a+b)/2)));
    printf("The integration is %f",I);
}
