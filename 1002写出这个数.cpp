#include <stdio.h>
int main()
{
	int i,j;
	int sum=0;
	int b[10]={0};
	int a[1000000000000000000]={0};
	i=j=0;
	while()
	{
		scanf("%d",&a[i]);
		i++;
		sum+=a[i];
	}
	while(sum){
		a[j]=sum%10;
		j++;
		sum=sum/10;
	}
	while(j)
	{
		printf("%d",j--);
	}
	
} 
