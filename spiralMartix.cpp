#include<iostream>
using namespace std;
int cnt=1;
void PrintMartix(int **a,int col,int rol,int start)
{
	
	int endX=col-1-start;
	int endY=rol-1-start;

		for(int i=start;i<endX;++i)
		{
			a[start][i]=cnt;
			cnt++;
		}
		if(start<endY)
		for(int i=start+1;i<=endY;++i)
		{
			a[i][endX]=cnt;
			cnt++;
		}
		if(start<endX && start<endY)
		for(int i=endX-1;i>=start;--i)
		{
			a[endY][i]=cnt;
			cnt++;
		}
		if(start<endX && start<endY-1)
		for(int i=endY;i>=start;--i)
		{
			a[i][start]=cnt;
			cnt++;
		}
}
int main()
{
	int m,n;
	cin >> m >> n;
	int **pArray=new int[100];

	int start=0;
	while(m>start*2 && n >>start*2)
	{
		PrintMartix(pArray,m,n,start);
		start++;
	}
				
	for(int i=0;i<m;++i)
	{
		for(int j=0;i<n;++j)
		printf("%d\t",pArray[i][j]);
		printf("\n");
	}
}
