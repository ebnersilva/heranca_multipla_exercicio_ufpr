#ifndef MOTOR_H
#define MOTOR_H

class Motor {
	public:
		Motor(){
			NumCilindro = 0;
			Potencia = 0;
		}
		
		Motor(int NumCilindro, int Potencia){
			this->NumCilindro = NumCilindro;
			this->Potencia = Potencia;
		}
		
		void getdata();
		
		void putdata();
	
	private:
		int NumCilindro;
		int Potencia;
};

#endif
