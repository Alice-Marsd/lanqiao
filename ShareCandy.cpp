#include<iostream>
using namespace std;
bool EqualCandy(int a[],int n)
{
	if(n <2 || a==NULL ||n>100)
	return false;
	int i;
	bool equal=true;
	for(i=1;i<=n;++i)
	{
		cout<<a[i]<<" ";
		if(a[1]!=a[i])
		 {
		 	equal=false;
		 //	break;
		 }
	}
	cout<<endl;
	return equal;
}
int main()
{
	int N,i;
	int a[101];
	cin >> N;
	for(i=1;i<=N;++i)
	{
		cin >> a[i];
	}
	int cnt=0;
	i=1;
	while(!EqualCandy(a,N))
	{	
		if(a[i]&1)
		{
			a[i]=a[i]+1;
			cnt++;
			cout<< "*****";
		}	
		a[i]=a[i]/2;
		
		if(i==1)
		 	a[3]=a[3]+a[i];
		else{
			a[i-1]=a[i-1]+a[i];	
		}	
		if(i%N==0)
		{		
			i=0;
		}
		++i;
	}
	cout << cnt <<endl;
}
