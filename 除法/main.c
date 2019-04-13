#include <stdio.h>

int main()
{
    int n, a, b, A, B, i, j, num[10];
    scanf("%d",&n);
    for( a=1234 ; a <= 9876 ; a++ )
    {
        b=a*n;
        A=a, B=b;
        for( i=0 ; i<4 ; i++)
        {
            num[i]=A%10;
            num[i+5]=B%10;
            A/=10;
            B/=10;
        }
        num[4]=0;
        num[9]=B%10;
        for( i=0 ; i<9 ; i++ )
        {
            for( j=i+1 ; j<=9 ; j++)
            {
                if( num[i] == num[j] )
                    break;
            }
            if(num[i] == num[j])
                break;
        }
        if(i==9 && j==10)
        {
            printf("%d/0%d=%d\n",b,a,n);
        }
    }
    return 0;
}
