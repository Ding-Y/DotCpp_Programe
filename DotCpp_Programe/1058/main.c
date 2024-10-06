#include <stdio.h>

int main(void)
{
    int n;
    int s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            s+=i;
        }
    }
    printf("%d",s);
    return 0;
}
