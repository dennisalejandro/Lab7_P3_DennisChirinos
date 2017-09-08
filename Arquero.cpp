#include "Arquero.h"
#include <iostream>
#include <string>
#include "Soldado.h"
using namespace std;
	Arquero::Arquero(string Nombre, string Ciudad, int Edad, int Flechas, int Precision) : Soldado(Nombre, Ciudad, Edad) { 
		setFlechas(Flechas);
		setPrecision(Precision);
	}
	void Arquero::setFlechas(int a) {
		this->Flechas = a;
	}
	void Arquero::setPrecision(int a) {
		this->Precision = a;
	}
	int Arquero::getFlechas() {
		return this->Flechas;
	}
	int Arquero::getPrecision() {
		return this->Precision;
	}
	int Arquero::ATK(){
		int ret;
		int flechas = getFlechas();
		int precision = getPrecision();
		ret = ((flechas/10)*precision);
		return ret;
	}
	int Arquero::DEF(){
		return 0;
	}
