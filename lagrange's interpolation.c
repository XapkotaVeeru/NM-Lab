#include<stdio.h>
#define SIZE 10
int main()
{
    float x[SIZE], f[SIZE],xp,p=0,l;
    int i,j,n;
    printf("Enter the number of data:");
    scanf("%d",&n);
    printf("Enter the datas");
    for(i=1;i<=n;i++)
    {
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
        printf("f[%d]=",i);
        scanf("%f",&f[i]);
    }
    printf("Enter interpolation point");
    scanf("%f",&xp);
    for(i=1;i<=n;i++)
    {
        l=1;
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                l=l*(xp-x[j])/(x[i]-x[j]);
            }
        }
        p=p+f[i]*l;
    }
    printf("The value of f[x] is %f",p);
}