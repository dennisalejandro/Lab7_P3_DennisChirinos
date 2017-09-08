#pragma once
#include <iostream>
#include <string>
#include "Soldado.h"
using namespace std;
class Coraza : public Soldado {
	private: 
		int Dureza;
		int Lanzas;
	public: 
		Coraza(string, string, int, int, int);
		void  setDureza(int);
		void  setLanzas(int);
		int getDureza();
		int getLanzas();
		int virtual ATK();
		int virtual DEF();
};
