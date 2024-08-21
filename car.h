#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car {
	public:
		Car();

		void ligar_carro();

		void desligar_carro();

		void acelerar(int aceleracao);
	
		void frear(int freio);

		void ligar_radio();
	
		void checar_velocidade() const;

		void checar_carro_ligado() const;

	private:
        	bool radio;
        	int ano;
        	string modelo;
        	string marca;
		int kmrodados;
		int gasolina;
        	bool ligado;
		int velocidade;
};

#endif
