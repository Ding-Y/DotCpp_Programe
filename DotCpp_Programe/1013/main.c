#include <stdio.h>
#include <tgmath.h>

int main(void)
{
    int sum=0,s=0,a=2;
    int n;
    scanf("%d",&n);
    while(n)
    {
        sum = sum*10 + a;
        s += sum;
        n--;
    }
    printf("%d",s);
    return 0;
}
