#include<stdio.h>
int a[1000000];
int main()
{
	int n,i,j;
	int jinwei,weishu=1,temp;
	
	scanf("%d",&n);
	a[0]=1;
	
	for(i=1;i<=n;++i)
	{
		for(j=0,jinwei=0;j<weishu;++j)
		{
			temp=a[j]*i+jinwei;
			a[j]=temp%10;
			jinwei=temp/10;
		}
		while(jinwei)
		{
			a[++weishu-1]=jinwei%10;
			jinwei=jinwei/10;
		}
	}
	for(i=weishu-1;i>-1;--i)
	printf("%d",a[i]);	
}
