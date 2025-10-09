#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[10],sum0=0,sume=0,i;
    printf("\n read array size:");
    scanf("%d",&n);
    printf("\n read array of elements\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
                sume=sume+a[i];
            else
                sum0=sum0+a[i];
        }
        printf("\n sum of odd=%d",sum0);
        printf("\n sum of even=%d",sume);
        return 0;
}
