#include<stdio.h>

int main(){
	
	float a,b;
	float sum; //addition of two numbers
	float diff; //substraction of two numbers
	float mult; //multiplication of two numbers
	float div; //division of two numbers
	
	printf("Enter the first number: ");
	scanf("%f",&a);
	printf("Enter the second number: ");
	scanf("%f",&b);
	
	sum = a + b;
	diff = a - b;
	mult = a * b;
	
	printf("\nThe sum is: %.3f \n",sum);
	printf("The difference is: %.3f\n",diff);
	printf("The multiplication is: %.3f\n",mult);
	
	if (b != 0) {
		
		div = a/b;
		printf("The division is: %.3f\n",div);
		
	}else{
		printf("cannot be divided\n");
	}
	
}
