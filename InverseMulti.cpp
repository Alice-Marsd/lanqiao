#include<stdio.h>
int main()
{
	int a,b,c,n;
	scanf("%d",&n);
	scanf("%d%d%d",&a,&b,&c);
	int count=0;
	for(int i=1;i<=n;++i)
	{
		if(i%a!=0  && i%b!=0 &&i%c!=0)
		count++;
	}
	printf("%d",count);
} 
