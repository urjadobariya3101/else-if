#include<stdio.h>
int main()
{
	
	int a,b;
	
	printf("Enter the number: ");
	scanf("%d",&a);
	
	printf("Enter the number: ");
	scanf("%d",&b);
	
	if(a<b){
		
		printf("%d is a minimum number.",a);
	}
	
	else{
		
		printf("%d is a minimum number.",b);
	}
	
	
	return 0;
}

