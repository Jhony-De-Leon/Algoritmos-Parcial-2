#include <iostream>
using namespace std;

int main(){
	float num1, num2, resultado;
	char operador;
	
	cout<< "Ingrese el primer dato a operar: ";
	cin >> num1;
	
	cout<< "Ingrese el operador (+, -, *, / ): "; 
	cin >> operador; 
	
	cout<< "Ingrese el segundo dato a operar: ";
	cin >> num2;
	
	switch (operador) {
		case '+' : 
		resultado = num1+num2;
		break;
		case '-' :
		resultado = num1-num2;
		break;
		case '*' : 
		resultado = num1*num2;
		break;
		case '/' :
		resultado= num1/num2;
		break; 
	 }
	 
	 cout <<  "El resultado es: " <<  resultado << endl;
	 
	 return 0; 
}