#include<iostream>
#include<cstdio>
using namespace std;
	int x[31]={0,1,1,1,4,4,4};
	int y[31]={0,1,4,7,1,4,7};
	int r[31]={0,2,2,2,2,2,2};
	int n=0,Max=-1;
	bool is[31][31];
	bool vis[31];
void dfs(int step)
{
//	cout << "step=" << step <<" ";
	int i;
	if(step>n)
	{
		int sum=0;
		for(i=1;i<=n;++i)
		{
			cout << vis[i]<< " ";
			if(vis[i])
				sum+=r[i]*r[i];
		}
		Max=max(sum,Max);
		return ;
	}

	vis[step]=false;
	dfs(step+1);
	for(i=1;i<step;i++);
	{
		if(vis[i] && !is[i][step])
		{
			return;
		}
	}
	vis[step]=true;
	dfs(step+1);
}
int main()
{
	int i,j;
	bool bo;
//	scanf("%d",&n);
//	for(i=1;i<=n;++i)
//	{
//		scanf("%d %d %d",&x[i],&y[i],&r[i]);
//	}
	n=6;
	
	for(i=1;i<=n;++i)
	{
		for(j=i+1;j<=n;++j)
		{
			bo=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]) > (r[i]+r[j])*(r[i]+r[j]);
			is[i][j]=bo;
			is[j][i]=bo;
		}
	}
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=n;++j)
		{
			cout <<is[i][j]<<" ";
		}
		cout <<endl;
	}
	dfs(1);
	cout << Max <<endl;
} 
