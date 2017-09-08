#pragma once
#include <iostream>
#include <string>
using namespace std;
class Soldado {
	private: 
		string Nombre;
		string Ciudad;
		int Edad;
	public: 
		Soldado(string, string, int);
		void  setNombre(string);
		void  setCiudad(string);
		void  setEdad(int);
		string getNombre();
		string getCiudad();
		int getEdad();
		virtual int ATK();
		virtual int DEF();
};
