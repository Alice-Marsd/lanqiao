#include<stdio.h>
#include<string.h>
void transfer(int a)
{
	
	if(a)
	{
		transfer(a/16);
		int c=a%16;
		if(c<10)
		{
			printf("%d",a%16);
		}else
		{
			printf("%c",a%16+'A'-10);
		}
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	if(a)
	{
		transfer(a);
	}else
	{
		printf("%d",a%16);
	}
	
	
}
