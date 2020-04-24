#include<iostream>
#include<cmath>
using namespace std;
class Node
{
	public:
	int x,y,h;
};
int main()
{
	int n,i,j;
    Node *node = new Node[1002];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> node[i].x >> node[i].y >> node[i].h;
    }
    double  map[1002][1002];
    double  min[1002];
    double MAX = 0x7f7f7f7f;
	for (int i = 0; i <= n+1; i++) 
	{
		for (int j = 0; j <=n+1; j++)
		{		 
			map[i][j]=MAX;
		}
		mins[i] = MAX;
	}

    for(i=1;i<=n;i++)
    {
    	for(j=i+1;j<=n;++j)
    	{
			double	x = (nodes[i].x - nodes[j].x) * (nodes[i].x - nodes[j].x);
			double	y = (nodes[i].y - nodes[j].y) * (nodes[i].y - nodes[j].y);
			double	h = (nodes[i].h - nodes[j].h) * (nodes[i].h - nodes[j].h);
			double temp=sqrt(x+y+h);
			map[i][j]=min(map[i][j],temp );
			map[j][i]=map[i][j];
		}
	}
    

	
}
