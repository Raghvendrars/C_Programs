#include<stdio.h>
#include<conio.h>

int main(){
	
	int num1=45; int num2=30;
	int i ,gcd;
	
	for(i=1;i<=num1 && i<=num2; ++i){
		if(num1%i==0 && num2%i==0){
			gcd=i;
			}
			
	}
	printf("The gcd for %d and %d is %d: ", num1 , num2 , gcd );
	
	return 0;
		
}

