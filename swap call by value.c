//Swap program Call by value
#include<stdio.h>
swap (int a,int b)      //Declaration
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("Swap value of a=%d and b=%d",a,b);
} 
int main()
{
	int a,b;
	printf("Enter value of a");
	scanf("%d",&a);
	printf("Enter value of b");
	scanf("%d",&b);
	swap(a,b);         //calling
}



