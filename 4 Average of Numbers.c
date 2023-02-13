#include<stdio.h>
#include<stdbool.h>

int main(){
	
	int i,n,sum=0;
	float average=0;
	bool conditional = true;
	
	
	while(conditional){
		
		//
		printf("Enter the number: ");
		scanf("%d",&n);
			
		if(n>0){
		
			int a[n];
		
			//enter keyboard numbers 
			for(i=0;i<n;i++){
				printf("Ingrese number ");
				scanf("%d",&a[i]);
			}
			
			//Calculate the average of the numbers
			for(i=0;i<n;i++){
				sum = sum + a[i];
			}
			
			printf("\nThe sum of the numbers is: %d\n",sum);
			
			average = sum/n;
			
			printf("\nThe average of the numbers is: %.3f",average);
			
			conditional = false;
		
		}else{
			
			printf("Enter a valid number.\n\n");
			
		}
	}	
}
