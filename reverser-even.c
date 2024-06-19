#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2!=0)
    {
        for(i=n-1;i>=0;i=i-2)
    {
        printf("%d ",a[i]);
    }
    }
    else
    {
        for(i=n-2;i>=0;i=i-2)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}