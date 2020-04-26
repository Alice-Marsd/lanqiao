#include<iostream>
#include<cstdio>
using namespace std;
	int x[31]={1,1,1,4,4,4};
	int y[31]={1,4,7,1,4,7};
	int r[31]={2,2,2,2,2,2};
	int n=6,Max=-1;
	bool is[31][31];
	bool vis[31];
void dfs(int step)
{
	int i;
	
	if(step>n)
	{
		int sum=0;
		for(i=1;i <= n;++i)
		{	
			cout << vis[i] <<" ";
			if(vis[i])
				sum+=r[i]*r[i];
		}
		
		Max=max(Max,sum);
		cout<<Max<<endl;
		return ;
	}

	vis[step]=false;
	dfs(step+1);
	for(i=1;i<step;++i);
	{
		if(vis[i] && !is[i][step])
		{
			return ;
		}
	}
	vis[step]=true;
	dfs(step+1);
}
int main()
{
	int i,j;
//	scanf("%d",&n);
//	for(i=1;i<=n;++i)
//	{
//		scanf("%d %d %d",&x[i],&y[i],&r[i]);
//	}	
	for(i=1;i<=n;++i)
	{
		for(j=i+1;j<=n;++j)
		{
			bool bo=((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]) ) > ((r[i]+r[j])*(r[i]+r[j]));
			is[i][j]=bo;
			is[j][i]=bo;
		}
	}

	dfs(1);
	cout << Max <<endl;
} 
