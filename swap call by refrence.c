//Swap program by call by reference
#include<stdio.h>
swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;

} int main()
{
	int a,b;
	printf("Enter value of a");
	scanf("%d",&a);
	printf("Enter value of b");
	scanf("%d",&b);
	swap(&a,&b);
	printf("Swaped value of a= %d and b= %d",a,b);
}

