#include<stdio.h>
#include<string.h>
int main()
{
	int a[100],b[100];
	int i,jinwei=0;
	char s[100];
	

	gets(s);
	int n1=strlen(s);

	for(i=0;i<n1;++i)
	{
		if(s[i]<='9'&&s[i]>='0')
		{
			a[n1-i-1]=s[i]-'0';
		}
	}

	gets(s);
	int n2=strlen(s);
	
	for(i=0;i<n2;++i)
	{
		if(s[i]<='9'&&s[i]>='0')
		{
			b[n2-i-1]=s[i]-'0';
		}
	}
	int n=n1>n2?n1:n2;
	for(i=0;i<n;++i)
	{
		if(i>=n1)
		a[i]=0;
		if(i>=n2)
		b[i]=0;
		int c=a[i]+b[i];
		a[i]=c%10+jinwei;
		jinwei=c/10;
	}
	if(jinwei)
	{
		a[i]=jinwei;
		++n;
	}

	for(i=n-1;i>-1;--i)
	printf("%d",a[i]);
	
	
}
