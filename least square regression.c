#include<stdio.h>
#define SIZE 50

int main()
{
    int n, i;
    float x[SIZE], y[SIZE], sumX=0, sumXX=0, sumY=0, sumXY=0, a, b,xx,xy;
    printf("How many data points?\n");
    scanf("%d", &n);
    printf("Enter data:\n");
    for(i=1;i<=n;i++)
    {
        printf("x[%d]=",i);
        scanf("%f", &x[i]);
        printf("y[%d]=",i);
        scanf("%f", &y[i]);
    }
    for(i=1;i<=n;i++)
    {
        sumX = sumX + x[i];
        sumXX = sumXX + x[i]*x[i];
        sumY = sumY + y[i];
        sumXY = sumXY + x[i]*y[i];
    }
    b = (n*sumXY-sumX*sumY)/(n*sumXX-sumX*sumX);
    a = (sumY - b*sumX)/n;
    printf("Values are: a=%f and b = %f\n",a,b);
    printf("the least square equation is %f +%fx\n",a,b);
    printf("enter the value of x");
    scanf("%f",&xx);
    xy=a+b*xx;
    printf("the value of y for %f is %f",xx,xy);
    return(0);
}