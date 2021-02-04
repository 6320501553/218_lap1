#include<stdio.h>
int main()
{
    int n,i,max,loca=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
            loca=i;
        }
    }
    printf("%d %d",loca+1,max);
    return 0;
}
