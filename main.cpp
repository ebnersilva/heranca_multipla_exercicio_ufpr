#include <iostream>
#include "Motor.h"
#include "Veiculo.h"
#include "CarroPasseio.h"
#include "Caminhao.h"

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");


	cout<<"\n******************* Software Elielton *******************\n\n";


	cout << "Testando a classe ""Motor""\n";
	Motor Motor1, Motor2(4, 80);
	cout<<"\nConstrutor sem argumentos: ==========================";
	Motor1.putdata();
	cout<<"\n\nConstrutor com argumentos: ==========================";
	Motor2.putdata();
	cout<<"\n\nEntrada de dados: =================";
	Motor1.getdata();
	cout<<"\nSaída Classe ""Motor"": =====================";
	Motor1.putdata();
	cout<<"\n\n";

	
	cout << "Testando a classe Veículo \n";
	Veiculo Veiculo1, Veiculo2(1200, 150, 34000.55);
	cout<<"\nConstrutor sem argumentos:\n==========================";
	Veiculo1.putdata();
	cout<<"\n\nConstrutor com argumentos:\n==========================";
	Veiculo2.putdata();
	cout<<"\n\nEntrada de dados:\n=================";
	Veiculo1.getdata();
	cout<<"\nSaída Classe ""Veiculo"":\n=====================";
	Veiculo1.putdata();
	cout<<"\n\n";


	cout << "Testando a classe CarroPasseio \n";
	CarroPasseio CarroPasseio1, CarroPasseio2(8, 740, 1450, 380, 1890000.55, "Azul", "Ferrari F430");
	cout<<"\nConstrutor sem argumentos:\n==========================";
	CarroPasseio1.putdata();
	CarroPasseio1.Motor::putdata();
	CarroPasseio1.Veiculo::putdata();
	cout<<"\n\nConstrutor com argumentos:\n==========================";
	CarroPasseio2.putdata();
	CarroPasseio2.Motor::putdata();
	CarroPasseio2.Veiculo::putdata();
	cout<<"\n\nEntrada de dados:\n=================";
	CarroPasseio1.getdata();
	CarroPasseio1.Motor::getdata();
	CarroPasseio1.Veiculo::getdata();
	cout<<"\nSaída Classe ""CarroPasseio"":\n=====================";
	CarroPasseio1.putdata();
	CarroPasseio1.Motor::putdata();
	CarroPasseio1.Veiculo::putdata();
	cout<<"\n\n";


	cout << "Testando a classe Caminhão \n";
	Caminhao Caminhao1, Caminhao2(12, 400, 5450, 160, 198000.55, 20, 2, 20);
	cout<<"\nConstrutor sem argumentos:\n==========================";
	Caminhao1.putdata();
	Caminhao1.Motor::putdata();
	Caminhao1.Veiculo::putdata();
	cout<<"\n\nConstrutor com argumentos:\n==========================";
	Caminhao2.putdata();
	Caminhao2.Motor::putdata();
	Caminhao2.Veiculo::putdata();
	cout<<"\n\nEntrada de dados:\n=================";
	Caminhao1.getdata();
	Caminhao1.Motor::getdata();
	Caminhao1.Veiculo::getdata();
	cout<<"\nSaída Classe ""Caminhao"":\n=====================";
	Caminhao1.putdata();
	Caminhao1.Motor::putdata();
	Caminhao1.Veiculo::putdata();
	cout<<"\n\n";
	

	return 0;
}
