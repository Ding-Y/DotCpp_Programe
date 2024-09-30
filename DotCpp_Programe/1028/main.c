//求方程 的根，
//用三个函数分别求当b^2-4ac大于0、等于0、和小于0时的根，
//并输出结果。从主函数输入a、b、c的值
#include <stdio.h>
#include <complex.h>
#include <math.h>

void dayu(float a,float b,float c);
void dengyu(float a,float b,float c);
void xiaoyu(float a,float b,float c);
int main(void)
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    const float result=pow(b,2)-4*a*c;
    if(result>0)
    {
        dayu(a,b,c);
    }
    else if(result==0)
    {
        dengyu(a,b,c);
    }
    else
    {
        xiaoyu(a,b,c);
    }
    return 0;
}

void dayu(float a,float b,float c)
{
    float x1,x2;
    x1=(-b+pow(pow(b,2)-4*a*c,1/2))/2/a;
    x2=(-b-pow(pow(b,2)-4*a*c,1/2))/2/a;
    printf("x1=%.3f x2=%.3f",x1,x2);
}

void dengyu(float a,float b,float c)
{
    float x1,x2;
    x1=x2=-b/2/a;
    printf("x1=%.3f x2=%.3f",x1,x2);
}

void xiaoyu(float a,float b,float c)
{
    float Q=-b/2/a;
    float X=pow(fabs(pow(b,2)-4*a*c),0.5)/2/a;
    printf("x1=%.3f+%.3fi x2=%.3f-%.3fi",Q,X,Q,X);
}