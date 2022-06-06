#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main(){

int  n1, n2, n3, n4, n5;
int min, max;



cout << "Digite o primeiro numero: \n";
cin >> n1;
max= n1, min =n1;

cout << "Digite o segundo numero: \n";
cin >> n2;

if (n2>n1){
	max=n2;
}
	else if ( n2<n1){
		min=n2;
	}

cout << "Digite o terceiro numero: \n";
cin >> n3;

if (n3>n1 && n3>n2){
	max=n3;
}
	else if ( n3<n1 && n3<n2){
		min=n3;
	}

cout << "Digite o quarto numero: \n";
cin >> n4;

if (n4>n1 && n4>n2 && n4>n3){
	max=n4;
}
	else if ( n4<n1 && n4<n2 && n4<n3){
		min=n4;
	}

cout << "Digite o quinto numero: \n\n\n";
cin >> n5;

if (n5>n1 && n5>n2 && n5>n3 && n5>n4){
	max=n5;
}
	else if (n5<n1 && n5<n2 && n5<n3 && n5<n4){
		min=n5;
	}



cout <<"O maior numero e: "<< max << "\n";
cout <<"O menor numero e: " << min;




	
}
