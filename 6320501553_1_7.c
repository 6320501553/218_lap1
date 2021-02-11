#include<stdio.h>
int main()
{
    float time;
    int n;
    scanf("%f",&time);
    n=(int)time;
    m=(int)(time*100)%100;

    if(time>=12.00&&time<=23.59)
        printf("%d: p.m.",n,time);
    else if(time<12.00&&time>=00.00)
        printf("%.2f a.m.",time);
    return 0;
}
