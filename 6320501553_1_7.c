#include<stdio.h>
int main()
{
    float time;
    scanf("%f",&time);
    if(time>11.59&&time<24.00)
        printf("%.2f p.m.",time);
    else if(time<12.00&&time>=00.00)
        printf("%.2f a.m.",time);
    return 0;
}
