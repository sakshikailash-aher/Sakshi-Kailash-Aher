// Factorial program by recursion
#include<stdio.h>
int factorial(int n);
int main(){
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);
	int result= factorial(n); //call
	printf("Factorial of n is %d",result);
	return 0;
}
int factorial(int n)
{
	if(n==0)
	{return 1;	}
	else
	{
		return n*factorial(n-1); //5*4*3*2*1
	}
}
