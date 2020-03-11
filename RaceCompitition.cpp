#include<stdio.h>

int main()
{
	int v1,v2,t,s,l;
	int i=1,x=0,x1=0,x2=0,flag=0;
	scanf("%d %d %d %d %d",&v1,&v2,&t,&s,&l); 
	while(x1<l && x2<l)
	{
		if(flag)
		{
			++flag;
		}else{
			x1+=v1;
		}
		if(flag==s+1)
		{
			flag=0;
		}
		x2+=v2;
		
		if(x1-x2>=t && flag<1)
		{
			flag=1;
		}	
		++i;	
	}
	if(x1>x2)
		printf("R\n");
	else if(x1==x2)
		printf("D\n");
	else
		printf("T\n");
	printf("%d",i-1);
 } 
