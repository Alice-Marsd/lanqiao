#include<stdio.h>
int gcd(int x,int y)
{
	if(!y)
	 return x;
	return gcd(y,x%y);
}
int main()
{
	int N,i,j;
	int a[101],dp[20005]={0};
	scanf("%d",&N);
	int gg=a[0];
	for(i=1;i<=N;++i)
	{
		scanf("%d",&a[i]);
		if(i==1)
		{
			gg=a[i];
		}else{
			gg=gcd(gg,a[i]);		//最小公倍数 
		}
	}
	
	if(gg>1)
	{
		printf("INF");
	}else{
		dp[1]=1;
		for(i=1;i<=N;++i)
		{
			for(j=a[i];j<10000;++j)
			{
				if(dp[j-a[i]+1]==1)
				{
					dp[j+1]=1;
				}
			}
		}
		int sum=0; 
		for(i=1;i<=10000;++i)
		{
			if(!dp[i])
				sum++;
		} 
		printf("%d",sum);
	}
	return 0;
 } 
