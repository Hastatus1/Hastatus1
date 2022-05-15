#include <iostream>
using namespace std;
int main(){
	
	int num, replay=0;
	
	while (replay !=2){
	
	
		while (num != 13){
			cout << "Digite um numero entre 1 e 100 \n";
			cin >> num;
			
			if(num <1){
				cout << "numero invalido\n";
			}
			
				else if (num >100){
					cout << "numero invalido\n";
				}
				
				else if (num <13){
				cout << "Tente um numero maior\n";
				}
				
				else if (num > 13){
					cout << "Tente um numero menor\n";	
				}
			}
	
	cout << "\nParabens voce acertou, o numero era: 13\n \n";	
	switch (num){
	
		case 13:
			num =0;
			break;}

	
	cout << "Quer tentar novamente ?\n[1]SIM\n[2]NAO\n";
	cin >> replay;
	
	if (replay ==2 ){
		cout <<"obrigado por jogar";
	}
	
		else if (replay !=1 && replay !=2){
			cout << "opcao invalida";
			break;
		}

	

}
	
	













}


	

	
	
	

				
			
		
	
	
		
	
	
	
		
	



	
	
	
	
	

