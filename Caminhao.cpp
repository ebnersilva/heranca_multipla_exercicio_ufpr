#include "Caminhao.h"
#include "Motor.h"
#include "Veiculo.h"
#include <iostream>
#include <string>

using namespace std;

void Caminhao::getdata(){
	cout << "\nCarga máxima (toneladas): ";
	cin >> Toneladas;
	
	cout << "\nAltura máxima (metros): ";
	cin >> AlturaMax;

	cout << "\nComprimento (metros): ";
	cin >> Comprimento;
}

void Caminhao::putdata(){
	cout << "\nCarga máxima: " << Toneladas << " ton";
	cout << "\nAltura máxima: " << AlturaMax << " m";
	cout << "\nComprimento: " << Comprimento << " m";
}
