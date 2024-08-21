#include <iostream>
#include <string>

#include "car.h"

using namespace std;

Car::Car(){
	radio = false;
	ano = 0;
	kmrodados = 0;
	gasolina = 0;
	ligado = false;
	velocidade = 0;
}

void Car::ligar_carro(){
	if(ligado) cout << "o carro ja esta ligado" << endl;
	if(!ligado) { 
		cout << "o carro foi ligado" << endl;
		ligado = true;
	}
}

void Car::desligar_carro(){
	if(!ligado) cout << "o carro ja esta desligado" << endl;
	if(ligado) {
		cout << "o carro foi desligado" << endl;
		ligado = false;
	}
}

void Car::acelerar(int aceleracao){
	if(ligado == false){
		cout << "voce precisa ligar o carro primeiro";
	}
	else if(velocidade >= 120){
		cout << "voce nao pode passar desta velocidade" << endl;
		velocidade = 120;
	}
	else if(aceleracao < 1){
		if(velocidade == 0){
			cout << "o carro esta parado" << endl;
		}
		else{
			cout << "voce precisa freiar para desacelerar" << endl;
		}
	}

	else{
		velocidade += aceleracao;
	}
}

void  Car::frear(int freio){
	cout << "ta" << endl;
}

void Car::ligar_radio(){
	if(radio) cout << "o radio ja esta ligado" << endl;
	else {
		cout << "Tocando agora: Disenchanted de My Chemical Romance" << endl;
		radio = true;
	}

}

