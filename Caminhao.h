#ifndef CAMINHAO_H
#define CAMINHAO_H
#include "Motor.h"
#include "Veiculo.h"

class Caminhao : public Motor, public Veiculo
{
	public:
		Caminhao(){
			Toneladas = 0; 
			AlturaMax = 0; 
			Comprimento = 0;
		}
		
		Caminhao(int Cilindro, int Potencia, int Peso, int VelocMax, float Preco, int t, int a, int co):Motor(Cilindro, Potencia), Veiculo(Peso, VelocMax, Preco) {
			this->Toneladas = Toneladas; 
			this->AlturaMax = AlturaMax;
			this->Comprimento = Comprimento;
		}	
		
		void getdata();
		
		void putdata();
		
	private:
		int Toneladas;
		int AlturaMax;
		int Comprimento;
};

#endif
