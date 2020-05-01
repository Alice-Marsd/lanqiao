#include<iostream>
#include<math.h>
using namespace std;
int package(int w[],int v[],int n,int C)
{
	if(n<0||C<=0)
	 return 0;
	int res=package(w,v,n-1,C);
	cout<<"n="<< n <<" Container="<< C <<"  "<< res<< endl;
	if (w[n]<=C)
	{
		res=max(res,v[n]+package(w,v,n-1,C-w[n]));
	 } 
	 return res;
}
int main()
{
	int n=4,C=5;
	int w[100]={2,1,3,2},v[100]={12,10,20,15};
	cout <<package(w,v,n-1,C);
}
