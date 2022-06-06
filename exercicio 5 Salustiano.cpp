#include <iostream>
using namespace std;
int main(){
	
	int num1, num2, soma=0;
	
	while (soma < 15){
		cout << "digite um numero: ";
		cin >> num1;
		
		cout << "digite outro numero: ";
		cin >> num2;
		
		soma = num1 + num2;
		
		cout << "O resultado foi: " << soma << "\n";
		
	}
	

}
