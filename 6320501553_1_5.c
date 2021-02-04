#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,max=0,loca=0;
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);
    for(i=1; i<=n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
            loca=i;
        }
    }
    printf("%d %d",loca,max);
}
