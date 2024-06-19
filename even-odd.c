#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,esum=0,osum=0;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
        if(v[i]%2==0)
        {
            esum=esum+v[i];
        }
        else
        {
            osum=osum+v[i];
        }
    }
    printf("%d %d",esum,osum);
    return 0;
}
