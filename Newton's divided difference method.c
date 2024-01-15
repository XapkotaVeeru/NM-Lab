#include<stdio.h>
#define SIZE 50
int main()
{
    int n,i,j;
    float x[SIZE],a[SIZE][SIZE],xp,p,l[SIZE];
    printf("Enter the degree of polynomial");
    scanf("%d",&n);
    printf("Enter the datas");
    for(i=0;i<=n;i++)
    {
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
        printf("f[%d]=",i);
        scanf("%f",&a[0][i]);
    }
    printf("Enter interpolation value");
    scanf("%f",&xp);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            a[i][j]=(a[i-1][j+1]-a[i-1][j])/(x[i+j]-x[j]);
        }
    }
    p=a[0][0];
    for(i=1;i<=n;i++)
    {
        l[i]=1;
        for(j=0;j<=i-1;j++)
        {
            l[i]= l[i]*(xp-x[j]);
        }
        p=p+a[i][0]*l[i];
    }
    printf("the value is %f",p);
    return(0);
}