#pragma once
#include <iostream>
#include <string>
#include "Soldado.h"
using namespace std;
class Arquero : public Soldado {
	private: 
		int Flechas;
		int Precision;
	public: 
		Arquero(string, string, int, int, int);
		void  setFlechas(int);
		void  setPrecision(int);
		int getFlechas();
		int getPrecision();
		virtual int ATK();
		virtual int DEF();
};
