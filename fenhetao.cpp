#include<stdio.h>
int main()
{
	int a,b,c,i=0;
	scanf("%d %d %d",&a,&b,&c);

	for(i=2 ;(i%a) || (i%b) || (i%c); ++i);
	
	printf("%d",i);
	
 } 
