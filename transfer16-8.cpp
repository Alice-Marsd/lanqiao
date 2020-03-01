#include<stdio.h>
#include<string.h>
int str[100005];
void transferBTo8(int length)
{
	int i,x=0;
	if(length%3)
	{
		for(i=length;i>-1;--i)
		{
			str[i+3-length%3]=str[i];	
		}
		for(i=0;i<(3-length%3);++i)
		{
			str[i]=0;
		}
		length+=3-length%3;
	}
	
	for(i=0;i<length;++i)
	{
		x=x*2+str[i];
		if(i%3==2)
		{
			if(x)
			{
				printf("%d",x);
			}
			x=0;
		}
	}
}
int main()
{
	int n,x=0,i,j;
	char input[6];

	scanf("%d",&n);
	while(n>0&&n<=10)
	{
		scanf("%s",&input);
		for(i=0;input[i];++i)
		{
			if(input[i]<='9' && input[i]>='0')
				x=input[i]-'0';
			else
				x=input[i]-'A'+10;
				
			for(j=4*i+3;j>=(4*i);--j)
			{
				str[j]=x%2;
				x=x/2;
			}
		}	
		transferBTo8(4*i);
		--n;
	}
 } 
