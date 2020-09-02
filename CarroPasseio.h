#ifndef CARROPASSEIO_H
#define CARROPASSEIO_H
#include <string>
#include "Motor.h"
#include "Veiculo.h"

class CarroPasseio : public Motor, public Veiculo
{
	public:
		CarroPasseio(){
			Cor = "";
			Modelo = "";
		}
		
		CarroPasseio(int Cilindro, int Potencia, int Peso, int VelocMax, float Preco, std::string Cor, std::string Modelo):Motor(Cilindro, Potencia), Veiculo(Peso, VelocMax, Preco) {
			this->Cor = Cor;
			this->Modelo = Modelo;
		}
		
		void getdata();
		
		void putdata();
		
	private:
		std::string Cor;
		std::string Modelo;
};

#endif
