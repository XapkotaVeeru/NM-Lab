#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float E=0.000001;
float functionRun(float x)
{
    return((x*x)-(4*x)-10);
}
float diff(float x)
{
    return ( 2*x-4);
}
void main()
{
    int count = 0;
    float firstValue,secondValue;
    printf("enter 1 values");
    scanf("%f", &firstValue);
    checker:
    count++;
    secondValue=(firstValue-((functionRun(firstValue))/ diff(firstValue)));
    if(fabs((secondValue-firstValue)/secondValue)>E)
    {
        firstValue=secondValue;
        goto checker;
    }
    printf("the root is %f in %d steps",secondValue, count);


}