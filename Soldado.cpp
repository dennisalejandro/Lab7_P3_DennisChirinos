#include "Soldado.h"
#include <iostream>
#include <string>
#include "Soldado.h"
using namespace std;
	Soldado::Soldado(string Nombre, string Ciudad, int Edad) { 
		setNombre(Nombre);
		setCiudad(Ciudad);
		setEdad(Edad);
	}
	void Soldado::setNombre(string a) {
		this->Nombre = a;
	}
	void Soldado::setCiudad(string a) {
		this->Ciudad = a;
	}
	void Soldado::setEdad(int a) {
		this->Edad = a;
	}
	string Soldado::getNombre() {
		return this->Nombre;
	}
	string Soldado::getCiudad() {
		return this->Ciudad;
	}
	int Soldado::getEdad() {
		return this->Edad;
	}
	int Soldado::ATK() {
		return 0;
	}
	int Soldado::DEF() {
		return 0;
	}
