#include<stdio.h>
#define SIZE 50
int main()
{
    int n,i,j;
    float f[SIZE][SIZE],x[SIZE];
    printf("Enter the degree of data:");
    scanf("%d",&n);
    printf("Enter the datas\n");
    for(i=0;i<=n;i++)
    {
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
        printf("f[%d]=",i);
        scanf("%f",&f[0][i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            f[i][j]=(f[i-1][j+1]-f[i-1][j])/(x[i+j]-x[j]);
        }
    }
    for(j=0;j<=n;j++)
    {
        printf("\n");
        printf("%f",x[j]);
        for(i=0;i<=n-j;i++)
        {
            printf("\t%f\t",f[i][j]);
        }
    }
    return 0;
}
