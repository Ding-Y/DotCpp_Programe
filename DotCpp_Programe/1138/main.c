#include <stdio.h>

int main(void)
{

    int n;
    scanf("%d",&n);
    int ar[10][10];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j||i+j==n-1)
            {
                sum+=ar[i][j];
            }
        }
    }

    printf("%d",sum);
    return 0;
}
