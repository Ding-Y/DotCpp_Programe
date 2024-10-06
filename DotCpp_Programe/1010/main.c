#include <stdio.h>
int main(void)
{
    long int l;
    int salary = 0;
    scanf("%ld",&l);
    if(l<=100000&&l>=0)
    {
        salary = l*0.1;
    }
    else if(l>100000&&l<=200000)
    {
        salary = 10000 +(l-100000)*0.075;
    }
    else if(l>200000&&l<=400000)
    {
        salary = 17500 + (l-200000)*0.05;
    }
    else if(l>400000&&l<=600000)
    {
        salary = 27500 + (l-400000)*0.03;
    }
    else if(l>600000&&l<=1000000)
    {
        salary = 33500 + (l-600000)*0.015;
    }
    else if(l>1000000)
    {
        salary = 39500 + (l-1000000)*0.01;
    }
    else(printf("输入错误"));
    printf("%d",salary);
    return 0;
}
