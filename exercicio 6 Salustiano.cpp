#include <iostream>
using namespace std;
int main(){
	
	int num=1;
	int par= 0;
	while (num % 11 != 0){
	
	cout << "digite um numero: \n";
	cin >> num;
	
	if ( num % 2 == 0){	
		par++;
	}
}

cout << "foram digitados " << par << " numeros pares";
	
}
