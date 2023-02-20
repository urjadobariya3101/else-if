#include<stdio.h>
int main()
{
	
	int a;
	
	printf("Enter the number: ");
	scanf("%d",&a);
	
	if(0<a){
		
		printf("The given number is neutral.");
	}
	
	else{
		
		printf("The given number is ladder.");
	}
	
	return 0;
}
