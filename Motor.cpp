#include "Motor.h"
#include <iostream>
#include <string>

using namespace std;

void Motor::getdata(){
	cout << "\nN�mero de cilindros: ";
	cin >> NumCilindro;
	
	cout << "\nPot�ncia: ";
	cin >> Potencia;
}

void Motor::putdata(){
	cout << "\nN�mero cilindros: " << NumCilindro;
	cout << "\nPot�ncia: " << Potencia << " cv";
}
