#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float functionRun(float x)
{
    return((x*x)-(4*x)-10);
}
void main()
{
    float E=0.000001;
    int count = 0;
    float firstValue,secondValue,midValue,absolute;
    float firstFunc,secondFunc,midFunc;
    printf("enter 2 values");
    scanf("%f %f", &firstValue, &secondValue);
    do{
        firstFunc = functionRun(firstValue);
        secondFunc = functionRun(secondValue);
        midValue = secondValue - ((secondValue - firstValue) / (secondFunc - firstFunc)) * secondFunc;
        firstValue = secondValue;
        secondValue = midValue;
        count++;

    }while(fabs((secondValue-firstValue)/secondValue)>E);
    printf("the root is %f in %d steps",midValue, count);


}