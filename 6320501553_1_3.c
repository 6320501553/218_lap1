#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int a;
    scanf("%lu",&a);
    printf("%lu %lu",a%3,a%11);
    return 0;
}
