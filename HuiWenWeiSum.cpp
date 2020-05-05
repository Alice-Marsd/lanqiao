#include<iostream>
using namespace std;
bool huiwen(int num)
{
//	cout<<"huiwen"<<endl;
	int a=0,x=0,temp=num;
	bool isPali=false;
	while(temp)
	{
		x=temp%10;
		a=a*10+x;
		temp=temp/10;
	}
//	cout <<a<<"  "<<num<<endl;
	if(a==num)
		isPali=true;
	return isPali;
	
}
bool weisum(int num,int n)
{
//	cout<<"weishu"<<endl;
	while(num)
	{
		n=n-num%10;
		num=num/10;
	}
	return n==0;
}
int main()
{
	int n,flag=1;
	int i;
	cin >> n;
	for(i=10001;i<1000000;++i)
	{
		if(huiwen(i) && weisum(i,n))
		{
			cout<< i<<endl;
			flag=0;
		}	
	}
	if(flag)
		cout<<"-1"<<endl;
} 
