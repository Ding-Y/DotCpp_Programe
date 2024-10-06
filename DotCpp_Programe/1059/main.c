#include <stdio.h>

int main(void)
{
    int n;
    long long int sum=0;
    int j=2;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=j;
        j+=3;
    }
    printf("%lld",sum);
    return 0;
}
