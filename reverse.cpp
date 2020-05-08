#include<stdio.h>
int reserve(int x)
{
	int n=0;
    while(x)
    {
        n=n*10+x%10;
        x=x/10;
    }
    return n;
}
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",reserve(x));
	
}
