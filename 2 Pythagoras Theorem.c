#include<stdio.h>
#include<math.h>

int main(){
	
	float a,b,hypotenuse;
	
	printf("Enter the first side: ");
	scanf("%f",&a);
	printf("Enter the second side: ");
	scanf("%f",&b);
	
	hypotenuse = sqrt(pow(a,2) + pow(b,2));
	
	printf("\nThe hypotenuse of the right triangle is: %.3f",hypotenuse);
	
}
