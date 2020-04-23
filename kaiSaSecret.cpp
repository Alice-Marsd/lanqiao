#include<stdio.h>

char* secret(char a[])
{
	int i=0;
	while(a[i])
	{
		if(a[i]=='x'||a[i]=='y' ||a[i]=='z')
			a[i]='a'+3;
		else
			a[i]=a[i]+3;
		++i;
	}
	return a;
}
int main()
{
	char a[]={'l','a','n','q','i','a','o'};
	printf("%s",secret(a));
}
