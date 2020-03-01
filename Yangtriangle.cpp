#include<stdio.h>
int main()
{
	int n,i,j;
	int a[100][100];
	scanf("%d",&n);
	for(i=0;i<=n;++i)
	{
		a[i][0]=1;
		
		a[i][i]=1;
	}

	for(i=1;i<n;++i)
	{
		for(j=1;j<=n;++j)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
			
		}
	}
	for(i=0;i<n;++i)
	{
		for(j=0;j<=i;++j)
		printf("%d ",a[i][j]);
		printf("\n");
	}
}
