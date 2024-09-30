//输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。
//写三个函数； ①输入10个数；②进行处理；③输出10个数。
#include <stdio.h>
int input(int arr1[10]);
int process(int arr2[10]);
void output(int arr3[10]);
int main(void)
{
    int a[10];
    input(a);
    process(a);
    output(a);
    return 0;
}

int input(int arr1[10])
{
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&arr1[i]);
    }
    return arr1[10];
}

int process(int arr2[10])
{
    int max_num=0,min_num;
    int n,i,j;
    int t=arr2[0];
    for(i=1;i<=9;i++)
    {
        if(arr2[i]>=t)
        {
            t=arr2[i]; //最大数字
            max_num=i;  //最大数字下表
        }
    }
    n=arr2[9];
    arr2[9]=t;
    arr2[max_num]=n;
    for(j=1;j<=8;j++)
    {
        if(arr2[j]<=t)
        {
            t=arr2[j];
            min_num=j;
        }
    }
    n=arr2[0];
    arr2[0]=t;
    arr2[min_num]=n;
    return arr2[10];
}

void output(int arr3[])
{
    for(int i=0;i<=9;i++)
    {
        printf("%d ",arr3[i]);
    }
    return;
}
