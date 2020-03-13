#include<stdio.h>
int flag=1;
int read(int n,int x)
{
	if(n)
	{
		read(n/10,x+1);
		switch(n%10)
		{
			case 0:

				if(flag && x%4 )
				{
					printf("ling ");
					flag=0;
				}
				break;
			case 1:
					if(x%4!=1){
						printf("yi ");
					}
					flag=1;
				break;
			case 2:
					printf("er ");
					flag=1;
					break;
			case 3:
				printf("san ");flag=1;
				break;
			case 4:
				printf("si ");flag=1;
				break;
			case 5:
				printf("wu ");flag=1;
				break;
			case 6:
				printf("liu ");flag=1;
				break;
			case 7:
				printf("qi ");flag=1;
				break;
			case 8:
				printf("ba ");flag=1;
				break;
			case 9:
				printf("jiu ");flag=1;
				break;
		}
		if(n%10){
			switch(x%4)
			{
				case 0:if(x/4==1)
						printf("wan ");
						else if(x/4==2)
						printf("yi ");
					break;
				case 1:printf("shi ");
					break;
				case 2:printf("bai ");
					break;
				case 3:printf("qian ");
					break;
			}
		}
		
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	read(n,0);
}
