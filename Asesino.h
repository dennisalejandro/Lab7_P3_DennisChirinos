#pragma once
#include <iostream>
#include <string>
#include "Soldado.h"
using namespace std;
class Asesino : public Soldado {
	private: 
		int Kills;
		int Skills;
	public: 
		Asesino(string, string, int, int, int);
		void  setKills(int);
		void  setSkills(int);
		int getKills();
		int getSkills();
		virtual int ATK();
		virtual int DEF();
};
