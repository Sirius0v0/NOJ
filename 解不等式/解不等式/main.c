#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, n=0, i=0;
    double sum=0, s=0;
    scanf("%d%d",&a,&b);
    for(  ; sum < b ;  )
    {
        n++;
        s += 1.0/n;
        sum += 1.0/s;
        if( sum<b && sum >a && i==0)
        {
            printf("%d ",n);
            i++;
        }
    }
    printf("%d",n-1);
    return 0;
}
