#ifndef VEICULO_H
#define VEICULO_H

class Veiculo
{
	public:
		Veiculo() {
			Peso = 0;
			VelocMax = 0;
			Preco = 0.0;
		}
		
		Veiculo(int Peso, int VelocMax, float Preco) {
			this->Peso = Peso;
			this->VelocMax = VelocMax;
			this->Preco = Preco;
		}
		
		void getdata();
		
		void putdata();
		
	private:
		int Peso;
		int VelocMax;
		float Preco;
};

#endif
