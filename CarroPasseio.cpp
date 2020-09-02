#include "CarroPasseio.h"
#include "Motor.h"
#include "Veiculo.h"
#include <iostream>
#include <string>

using namespace std;

void CarroPasseio::getdata(){
	cout<<"\nCor do veículo: ";
	getline (cin,Cor);
	
	cout<<"\nModelo: ";
	getline (cin,Modelo);
}

void CarroPasseio::putdata(){
	cout<<"\nCor do veículo: "<<Cor;
	cout<<"\nModelo: "<<Modelo;
}
