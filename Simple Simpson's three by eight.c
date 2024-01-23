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
    h=(b-a)/3;
    I=(3*h/8)*(functionRun(a)+ functionRun(b)+ 3* functionRun(a+h)+3* functionRun(a+2*h));
    printf("The integration is %f",I);
}

