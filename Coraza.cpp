#include "Coraza.h"
#include <iostream>
#include <string>
#include "Soldado.h"
using namespace std;
	Coraza::Coraza(string Nombre, string Ciudad, int Edad, int Dureza, int Lanzas) : Soldado(Nombre, Ciudad, Edad) { 
		setDureza(Dureza);
		setLanzas(Lanzas);
	}
	void Coraza::setDureza(int a) {
		this->Dureza = a;
	}
	void Coraza::setLanzas(int a) {
		this->Lanzas = a;
	}
	int Coraza::getDureza() {
		return this->Dureza;
	}
	int Coraza::getLanzas() {
		return this->Lanzas;
	}
	int Coraza::ATK() {
		return this->Lanzas;
	}
	int Coraza::DEF() {
		return this->Dureza;
	}
