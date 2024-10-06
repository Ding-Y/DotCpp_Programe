#include <stdio.h>
int main(void)
{
    int N;
    int s = 0;
    int n,i;
    scanf("%d",&N);
    for(n=6;n<=N;n++)//遍历N一下数字
    {
        for(i=1;i<n;i++)//判断n是否为完数
        {
            if(n%i==0)//判断因子
            {
                s+=i;
            }
        }
        if(s==n)
        {
            printf("%d its factors are ",n);
            for(i=1;i<n;i++)
            {
                if(n%i==0)
                {
                    printf("%d ",i);
                }
            }
            printf("\n");
        }
        s = 0;
    }
    return 0;
}
