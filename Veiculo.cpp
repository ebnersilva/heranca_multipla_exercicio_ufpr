#include "Veiculo.h"
#include <iostream>
#include <string>

using namespace std;

void Veiculo::getdata(){
	cout << "\nPeso do ve�culo (kg): ";
	cin >> Peso;
	
	cout << "\nVelocidade m�xima (km/h): ";
	cin >> VelocMax;
	
	cout << "\nPre�o (R$): ";
	cin >> Preco;
}

void Veiculo::putdata(){
	cout << "\nPeso do ve�culo: " << Peso << " kg";
	cout << "\nVelocidade m�xima: " << VelocMax << " km/h";
	cout << "\nPre�o: R$ " << Preco;
}
