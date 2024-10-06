#include <stdio.h>
#include <math.h>
int main(void)
{
    int n=100;
    int ge,shi,bai;
    while(n<=999)
    {
        bai = n/100;
        shi = (n-(n/100)*100)/10;
        ge = (n-(n/100)*100)-((n-(n/100)*100)/10)*10;
        if(n==pow(bai,3)+pow(shi,3)+pow(ge,3))
        {
            printf("%d\n",n);
        }
        n++;
    }
    return 0;
}
