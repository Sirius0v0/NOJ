#include <stdio.h>

int main()
{
    int a, b, c, i, j, num[9];
    int A, B, C;
    for( a=123 ; a <= 329 ; a++ )
    {
        b = 2*a;
        c = 3*a;
        A=a,B=b,C=c;
        for( i = 0 ; i < 3 ; i++ )
        {
            num[i] = A%10;
            num[i+3] = B%10;
            num[i+6] = C%10;
            A/=10;
            B/=10;
            C/=10;
        }
        for( i=0 ; i<8 ; i++ )
        { 
            for( j=i+1 ; j < 9 ; j++ )
            {
                if( num[i] == num[j] )
                    break;
            }
            if( num[i] == num[j] )
                break;
        } 
        if( i==8 && j==9 )
        {
            printf("%d %d %d\n",a,b,c);
        }
    }
    return 0;
}
