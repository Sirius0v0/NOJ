#include <stdio.h>

int main()
{
    int tn_1, tn, an_1=1, an, bn_1=0 ,bn;
    scanf("%d",&tn);
    for( tn_1=1 ; tn_1<=tn ; tn_1++)
    {
        an=bn_1;
        bn=3*an_1+2*bn_1;
        an_1=an;
        bn_1=bn;
    }
    printf("%d %d",an,bn);
    return 0;
}
