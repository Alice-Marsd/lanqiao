#include <stdio.h>
void shuchu1( int , int );
void shuchu2( int , int );
int main( void )
{
    int n;
    scanf("%d", &n); 
    shuchu1(n , n + 1);
    printf("\n");
    return 0;
}
void shuchu2(int n, int k)
{
    if (n == k)
    {
    	printf("sin(%d)", n );
	}
    else
    {
        printf("sin(%d", n);
        if( n % 2 == 0 )
        {
        	printf("+");
		}
		else
		{
			printf("-");
		}
        shuchu2(n + 1, k);
        printf(")");
    }
}
void shuchu1(int n , int k)
{
    if ( n == 1 )
    {
        shuchu2(n , n);
    }
    else
    {
        printf("(");
        shuchu1(n-1, k);
       	printf(")");
        shuchu2(1, n);
    }
    printf("+%d", k - n);

    
}


