#include<stdio.h>
int main()
{
    float time;
    scanf("%f",&time);
    if(n>=12.00&&n<=23.59)
        printf("%.2f p.m.",time);
    else if(time<=11.59&&time>=00.00)
        printf("%.2f a.m.",time);
    return 0;
}
