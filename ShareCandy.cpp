#include<stdio.h>
int a[1003];
int n;
int check();
int answer = 0;
int main()
{
	scanf("%d",&n);
	int i;
	for(i=0 ; i<n ; i++)
	scanf("%d",&a[i]);
	int bingo = 0;
	while(!check())
	{
		int t = a[0];
		for( i=0 ; i<n-1 ; i++)
		{
			a[i] = a[i]/2 + a[i+1]/2;
			if(a[i]%2) 
			{
				a[i]++;
				answer++;
			}
		}
		a[n-1] = a[n-1]/2 +t/2;
		if(a[n-1]%2)
		{
			a[n-1]++;
			answer++;
		}
	}
	printf("%d\n",answer);
	return 0;
}
int check()
{
	int i;
	for( i=0 ; i<n-1 ; i++)
	{
		if(a[i]==a[i+1]) continue;
		return 0;
	}
	if(a[n-1]==a[0]) return 1;
	return 0;
}
 
 
 
 
