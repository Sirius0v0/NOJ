#include <stdio.h>
#include <math.h>

int main()
{
    int n, m;
    double sum=0;
    scanf("%d%d",&n,&m);
    for( ; n <= m ; n++ )
    {
        sum += 1.0/n/n;
    }
    printf("%.5f",sum);
    return 0;
}
