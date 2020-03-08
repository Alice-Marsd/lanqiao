#include<iostream>
using namespace std;

int main()
{
	int m,n;
	int nn[220][220];
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>nn[i][j];
	int x=0,y=0;
	int f[220][220];
	cout<<nn[x][y];
	f[0][0]=1;
	int num=1;
	while(m*n>num)
	{
		while(x+1<m && f[x+1][y]!=1)
		{
			cout<<" "<<nn[x+1][y];
			x++;
			f[x][y]=1;
			num++;
		}
		while(y+1<n && f[x][y+1]!=1)
		{
			cout<<" "<<nn[x][y+1];
			y++;
			f[x][y]=1;
			num++;
		}
		while(x-1>=0 && f[x-1][y]!=1)
		{
			cout<<" "<<nn[x-1][y];
			x--;
			f[x][y]=1;
			num++;
		}
		while(y-1>=0 && f[x][y-1]!=1)
		{
			cout<<" "<<nn[x][y-1];
			y--;
			f[x][y]=1;
			num++;
		}
	}

	return 0;
}

