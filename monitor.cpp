#include<iostream>
using namespace std;
int main()
{
	int n,a[20][20];
	cin>>n;
	for(int i=1;i<=n;i++)
		a[0][i]=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
			
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		if(a[j][i]==1)
			a[0][i]++;
	int t=n/2;
	for(int i=1;i<=n;i++)
	if(a[0][i]>t)
	cout<<i<<" ";
}

