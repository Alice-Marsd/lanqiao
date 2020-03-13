#include<iostream>
using namespace std;
string FJString(int n)
{
	if(n==1)
		return "A";
	else
		return FJString(n-1)+(char)('A'+n-1)+FJString(n-1);
}
int main()
{
	
	int n,i,j,cnt=0;
	cin >> n;
	cout<<FJString(n);
	
}
