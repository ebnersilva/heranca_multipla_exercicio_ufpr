#include "Motor.h"
#include <iostream>
#include <string>

using namespace std;

void Motor::getdata(){
	cout << "\nNúmero de cilindros: ";
	cin >> NumCilindro;
	
	cout << "\nPotência: ";
	cin >> Potencia;
}

void Motor::putdata(){
	cout << "\nNúmero cilindros: " << NumCilindro;
	cout << "\nPotência: " << Potencia << " cv";
}
