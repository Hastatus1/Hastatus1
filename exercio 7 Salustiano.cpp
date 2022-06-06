#include <iostream>
int main(){
	
	int num;
	int tabu=1;
	
	printf("digite um numero ");
	scanf("%d", &num);
	

	
	while (tabu<=10  ){
	
	int mult =num*tabu;
	

	printf("\n X%d", tabu);
	printf("=");
	
	printf(" %d",(tabu ,mult));
	

	tabu++;
	}
	
}
