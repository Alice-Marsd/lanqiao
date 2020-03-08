#include<iostream> 
#include<queue>
using namespace std;


int func(priority_queue <int,vector<int>,greater<int> > &p)
{
	int x=p.top();p.pop();
	int y=p.top();p.pop();
	p.push(x+y);
	return x+y;
}
int main(int argc,char const *argv[])
{
	priority_queue <int,vector<int>,greater<int> > p_q;
	int cnt;
	int tmp;
	cin>>cnt;
	while(cnt--)
	{
		cin >> tmp;
		p_q.push(tmp);
	}
	
	int sum=0;
	while(p_q.size() != 1)
	{
		sum +=func(p_q);
	}
	cout << sum << endl;
	return 0;
}
