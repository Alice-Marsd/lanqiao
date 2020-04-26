#include<stdio.h>
int main()
{
	int m,n;
	int martix[10][10];
	scanf("%d %d",&m,&n);		
	for(int i=0;i<m;++i)
	{
		for(int j=0;i<n;++j)
		printf("%d\t",martix[i][j]);
		printf("\n");
	}
}
