#include <stdio.h>

int main(void)
{
    int nums[10];
    int s = 0;
    float ave;
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<=9;i++)
    {
        s+=nums[i];
    }
    ave = s/10;
    int num = 0;
    for(int i=0;i<=9;i++)
    {
        if(nums[i]>ave)
        {
            num++;
        }
    }
    printf("%d",num);
    return 0;
}
