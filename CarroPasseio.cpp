#include "CarroPasseio.h"
#include "Motor.h"
#include "Veiculo.h"
#include <iostream>
#include <string>

using namespace std;

void CarroPasseio::getdata(){
	cout<<"\nCor do ve�culo: ";
	getline (cin,Cor);
	
	cout<<"\nModelo: ";
	getline (cin,Modelo);
}

void CarroPasseio::putdata(){
	cout<<"\nCor do ve�culo: "<<Cor;
	cout<<"\nModelo: "<<Modelo;
}
