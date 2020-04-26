#include<stdio.h>
int n=4;
int count=0;
void f(int left,int right)
{
 	printf("%d --- %d\n",left,right);
	if(left==n)
	{
		printf("*\n");
		count++;
		return ;
	}

	f(left+1,right);
	if(left>right)
	{
		f(left,right+1);
	}
}
int main()
{

	f(0,0);
	printf("\n%d",count);
 } 
