#include<iostream>
using namespace std;
bool lengthover10000(int a[],int b[],int n)
{
	int i,sum=0;
	for(i=1;i<=n;++i)
	{
		if(b[i]<a[i])
		 return false;
		sum+=b[i]-a[i];
	}
	return sum>=10000;
}
int calculatelen(int a[],int b[],int n)
{
	if(a==NULL || b==NULL || !lengthover10000(a,b,n))
	return 0;
	int max=0,temp=0,i,j;
	for(i=1;i<=n;++i)
	{
		for(j=i+1;j<=n;++j)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	temp=0;
	max=a[0];
	for(i=1;i<=n;++i)
	{
		temp=a[i]-b[i-1];	
		a[i]=a[i]-temp;
		b[i]=b[i]-temp;
		if(temp>max || (-1)*temp>max)
			max=temp;
	}
	return max>0?max:(-1)*max;
}
int main()
{
	int n,i;
	int a[10001],b[10001];
	cin >> n;
	for(i=1;i<=n;++i)
	{
		cin >> a[i] >>b[i];
	}
	cout <<	calculatelen(a,b,n) <<endl;
	
}
