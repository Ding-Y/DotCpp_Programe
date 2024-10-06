#include <stdio.h>
int num_max(int,int);   //求最大公约数
int num_min(int,int);   //求最小公倍数
int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    int num_max_result,num_min_result;
    num_max_result=num_max(a,b);
    num_min_result=num_min(a,b);
    printf("%d %d",num_max_result,num_min_result);
    return 0;
}

int num_max(int a,int b)
{
    int k;
    if(a>=b)
    {
        k=b;
    }
    else
    {
        k=a;
    }
    for(int i=k;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            return i;
            break;
        }
    }
}

int num_min(int a,int b)
{
    int k;
    if(a>=b)
    {
        k=a;
    }
    else
    {
        k=b;
    }
    for(int i=k;;i++)
    {
        if(i%a==0&&i%b==0)
        {
            return i;
            break;
        }
    }
}
