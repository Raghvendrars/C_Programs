#include<stdio.h>
#include<conio.h>

void main(){
	
	int x=4;
	int i;
	int n=8;
	int ans;
	
	if(n>=1){
		for(i=0; i<=n; i++){
			ans=x*i;
		   printf("\nx ^ n is: %d", ans);
		}
		
	}
}
