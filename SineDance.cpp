#include<iostream>
string SineDance(int n)
{
	return SineDance(n-1)
}
int main()
{
	int n;
	cin >> n;
	SineDance(n);
}
