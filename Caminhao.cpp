#include "Caminhao.h"
#include "Motor.h"
#include "Veiculo.h"
#include <iostream>
#include <string>

using namespace std;

void Caminhao::getdata(){
	cout << "\nCarga m�xima (toneladas): ";
	cin >> Toneladas;
	
	cout << "\nAltura m�xima (metros): ";
	cin >> AlturaMax;

	cout << "\nComprimento (metros): ";
	cin >> Comprimento;
}

void Caminhao::putdata(){
	cout << "\nCarga m�xima: " << Toneladas << " ton";
	cout << "\nAltura m�xima: " << AlturaMax << " m";
	cout << "\nComprimento: " << Comprimento << " m";
}
