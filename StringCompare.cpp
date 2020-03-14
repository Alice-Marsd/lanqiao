#include<stdio.h>
int main()
{
	char a[10],b[10];
	int i=0,flag=0,n1,n2;
	scanf("%s",&a);
	scanf("%s",&b);
	for(i=0;a[i];++i);
	n1=i;
	for(i=0;b[i];++i);
	n2=i;
	if(n1-n2)
	{
		printf("1");
	}else{
		while(n1)
		{
			if(a[n1]-b[n1])
			{
				if(a[n1]-32==b[n1] || a[n1]+32==b[n1])
				{
					flag=1;
				}else{
					
					break;
				}
				
			}
			--n1;
		}
		if(flag)
		{
			printf("3");
		}else if(n1){
			printf("4");
		}else{
			printf("2");
		}
	}
	
	
	
} 
