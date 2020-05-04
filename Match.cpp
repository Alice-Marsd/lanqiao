#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
const int maxn = 100000+7;
const int max_score = 100000;
int a[maxn]={0};
int p[maxn]={0};
int dp[maxn]={0};
int N,k;
int main()
{
	int i,j,score;

	while(scanf("%d%d",&N,&k) == 2)
	{
		memset(a,0,sizeof(a));
		int count=0;
		for( i=1 ; i <= N ; ++ i)
		{
			cin >> score;
			a[score]++;
		}
		if(k==0)
		{
			for( i=0 ; i <=100000 ; ++ i)
			{
				if(a[i])
					count++;	
			}	
		}else{
			for( i=0 ; i < k ; ++i)
			{
				int m=0;
				for(j=i; j < max_score; j +=k )
				{
					p[m++]=a[j];
				}	
				dp[0]=p[0];
				for(j=1 ;j < m;++j )
				{
					if(j==1) dp[j]=max(dp[0],p[j]);
					else dp[j]=max(dp[j-2]+p[j],dp[j-1]);
				}
				count+=dp[m-1];
			}
		}
		
		printf("%d\n",count);
	}

	return 0;
	
}
