#pragma once
#include <iostream>
#include <string>
#include "Soldado.h"
#include "Coraza.h"
#include "Arquero.h"
#include "Asesino.h"
#include <vector>
using namespace std;
class Squad {
	private: 
		int ATK;
		int DEF;
		int ID;
	public: 
		Squad(int, int, int);
		void  setATK(int);
		void  setDEF(int);
		int getATK();
		int getDEF();
		int getID();
		int setID(int);
		vector<Soldado*>* vSoldados = new vector<Soldado*>();
};
