#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	for(i=1000;i<10000;++i)
	{
		if(i%10==i/1000 && i/10%10==i/100%10)
		printf("%d\n",i);
	}
	
}
