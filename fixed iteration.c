#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define maxLimit 100
float E=0.000001;
float functionRun(float x)
{
    return(sinf(x)+3*x-2);
}
float diff(float x)
{
    return ((2-(sinf(x)))/3);
}
void main()
{
    int count = 0;
    float firstValue,secondValue;
    printf("enter 1 values");
    scanf("%f", &firstValue);
    do{
        secondValue= diff(firstValue);
        count++;
        if (count > maxLimit)
        {
            printf("Non Convergent\n");
            goto ender;
        }
        firstValue=secondValue;
    }while(fabs(functionRun(secondValue))>E);
    printf("the root is %f in %d steps \n",secondValue, count);
    ender:
    printf("program is ended");

}