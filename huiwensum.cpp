#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	 
	for(i=0;i<10;++i)
		for(j=0;j<10;++j)
		{
			k=n-2*i-2*j;
			if(k>=0&&k<10)
			{
				printf("%d%d%d%d%d\n",i,j,k,j,i);
			}
		}

	for(i=0;i<10;++i)
		for(j=0;j<10;++j)
			for(k=0;k<10;++k)
			{
				if(2*i+2*j+2*k==n && i)
				{
					printf("%d%d%d%d%d%d\n",i,j,k,k,j,i);
				}
			}
}
