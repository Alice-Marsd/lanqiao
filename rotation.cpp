#include<iostream>
using namespace std;
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int dp[100][100];
	for (int i = 1; i <=n; i++) 
	{
		dp[1][i]=n-i+1;
	}	
	for(int i = 2; i <= m; i++)
		if((i&1)==1)
		{ 
			 //奇数的话是要比前面大的,所以用倒序
			for(int j = n; j >= 1; j--)
			{
				dp[i][j] = (dp[i-1][j-1] + dp[i][j+1]) % 10000;
			}
		}else{
		        for(int j = 1; j <= n; j++)
				{
		        	dp[i][j] = (dp[i-1][j+1] + dp[i][j-1]) % 10000;
		        }
			} 
	int result = (m & 1)==1 ? dp[m][1] : dp[m][n];
	printf("%d",result);
	return 0; 
}
