#include<iostream>
using namespace std;
int main()
{
	long long i,a,b,t,n;
	cin>>a>>b>>n;
	a=a%b;
	while(n-10>0)   //ÿ��ȡ10λ�����ٱƽ�С���� ȷ��K��λ��
	{
		a*=1e10;        //1e10=10000000000
		a%=b;
		n-=10;
	}
	for(i=0;i<n+2;i++)
	{
		a*=10;
		if(i>=n-1) 
        cout<<a/b;
		a%=b;
	}
    return 0;
}
