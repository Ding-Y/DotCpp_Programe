#include <stdio.h>

int main(void)
{
    int s;
    scanf("%d",&s);
    int ge,shi,bai;
    bai = s/100;
    shi = (s-s/100*100)/10;
    ge = s-(s/10)*10;
    printf("%d %d %d",ge,shi,bai);
    return 0;
}
