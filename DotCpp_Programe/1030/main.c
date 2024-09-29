//写一个函数，使给定的一个二维数组（３×３）转置，即行列互换。
#include <stdio.h>
int reverse(int array[3][3]);
int main(void)
{
    int array[3][3];
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    reverse(array);
    return 0;
}

int reverse(int array[3][3])
{
    int result[3][3];
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            result[j][i]=array[i][j];
        }
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}


