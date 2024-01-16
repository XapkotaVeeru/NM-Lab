#include<stdio.h>
int main()
{
    int i,n,j;
    float y[100][100];
    printf("Enter the degree of datas n:\n");
    scanf("%d",&n);
    printf("Enter the datas\n");
    for(i=0;i<=n;i++)
    {
        printf("y[%d]=",i);
        scanf("%f",&y[i][0]);
    }
    for(j=1;j<=n;j++)
    {
        for(i=0;i<=n-j;i++)
        {
            y[i][j]=y[i+1][j-1]-y[i][j-1];
        }
    }
    printf("\nThe forward difference table is:\n");
    for(i=0;i<=n;i++)
    {
        printf("\n");
        for(j=0;j<=n-i;j++)
        {
            printf("%f\t",y[i][j]);
        }
    }
    for(j=1;j<=n;j++)
    {
        for(i=j;i<=n;i++)
        {
            y[i][j]=y[i][j-1]-y[i-1][j-1];
        }
    }
    printf("\nThe backwards difference table is:\n");
    for(i=0;i<=n;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++)
        {
            printf("%f\t",y[i][j]);
        }
    }
    return 0;
}