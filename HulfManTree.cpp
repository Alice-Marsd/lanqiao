#include<stdio.h>
int main()
{
	int a[100]={5,3,8,2,9};
	int i,n,j,x=0;
	int *pa,*pb;
//	scanf("%d",&n);
	n=5;
//	for(i=0;i<n;++i)
//	{
//		scanf("%d",&a[i]);
//	}

	for(i=0;i<n;++i)
	printf("%d\t",a[i]);
	printf("\n");
	while(n>0)
	{
		pa=a,pb=a+1;
		for(i=1;i<n;++i)
		{
			if(a[i]<=*pa)
			{
				pb=pa;				
				pa=a+i;	
			}else if(a[i]<=*pb){
				pb=a+i;
			}
		}
	//	if(pa=pb)
		int sum=*pa+*pb;
		printf("%d + %d = %d\n",*pa,*pb,sum);
		i=0;
		while(n>i)
		{
			
			if(a+i==pa || a+i==pb)
			{
				for(j=i;j<n;++j)
				{
					a[j]=a[j+1];
					printf("%d\t",a[j]);
				}
			}
			if(a+i==pa)
			{
				pb=pb-1;	
			}
			if(a+i==pb)
			{
				pa=pa-1;
			}
			
			printf("\n%d----%d\n",i,a[i]);
			if(pa==pb)
			continue; 
			++i;
				
		}
		--n;
		a[n-1]=sum;
		
		
		printf("<--------------------");
		for(i=0;i<n;++i)
		printf("%d\t",a[i]);
		printf("-------------------->\n");
		
	} 

	printf("-------------------\n");
	for(i=0;i<n;++i)
	printf("%d----%d\n",i,a[i]);
	
} 
