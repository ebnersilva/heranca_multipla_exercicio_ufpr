#include "Veiculo.h"
#include <iostream>
#include <string>

using namespace std;

void Veiculo::getdata(){
	cout << "\nPeso do veículo (kg): ";
	cin >> Peso;
	
	cout << "\nVelocidade máxima (km/h): ";
	cin >> VelocMax;
	
	cout << "\nPreço (R$): ";
	cin >> Preco;
}

void Veiculo::putdata(){
	cout << "\nPeso do veículo: " << Peso << " kg";
	cout << "\nVelocidade máxima: " << VelocMax << " km/h";
	cout << "\nPreço: R$ " << Preco;
}
