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
    h=b-a;
    I=(h/2)*(functionRun(a)+ functionRun(b));
    printf("The integration is %f",I);
}