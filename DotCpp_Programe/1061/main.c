#include <stdio.h>

int main(void)
{
    int nums[20];
    int i = 0;
    int num1=0,num2=0;
    float s=0;
    float ave =0;
    for(i=0;i<=19;i++)
    {
        scanf("%d",&nums[i]);
    }
    for(int j=0;j<=19;j++)
    {
        if(nums[j]<0)
        {
            num1++;
        }
        else if(nums[j]>=0)
        {
            s+=nums[j];
            num2++;
        }
    }
    ave = s/num2;
    printf("%d\n",num1);
    printf("%.2f",ave);

    return 0;
}
