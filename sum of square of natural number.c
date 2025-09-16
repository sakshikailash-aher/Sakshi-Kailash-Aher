#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter a Number");
	scanf("%d",&n);
	while(i<=n){
		sum=sum+(i*i);
		i++;
	}
	printf("Sum of square Number=%d ",sum);
}
