#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
void transfer(char input[],int n)
{
	unsigned int num=0;
	int i;
	for(i=0;i<n;++i)
	{
		if(input[i]>='0' && input[i]<='9')
		{
			num=num*16+input[i]-'0';
		}else if(input[i]>='A' && input[i]<='F')
		{
			num=num*16+input[i]-'A'+10;
		}
	}
	cout << num << endl;
}
int main()
{
	char input[9];

	scanf("%s",&input);
	transfer(input,strlen(input));
}
