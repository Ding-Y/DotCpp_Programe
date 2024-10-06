#include <stdio.h>

int main(void)
{
    int n;
    int j;
    long long int Sn=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        long long int s =1;
        for(j=1;j<=i;j++)
        {
            s*=j;
        }
        Sn+=s;
    }
    printf("%lld",Sn);
    return 0;
}
