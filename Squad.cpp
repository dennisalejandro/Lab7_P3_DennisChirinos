#include "Squad.h"
#include <iostream>
#include <string>
#include "Soldado.h"
#include "Coraza.h"
#include "Arquero.h"
#include "Asesino.h"
using namespace std;
	Squad::Squad(int ATK, int DEF, int ID) { 
		setATK(ATK);
		setDEF(DEF);
		setID(ID);
	}
	void Squad::setATK(int a) {
		this->ATK = a;
	}
	void Squad::setDEF(int a) {
		this->DEF = a;
	}
	int Squad::getATK() {
		return this->ATK;
	}
	int Squad::getDEF() {
		return this->DEF;
	}
	int Squad::getID() {
		return this->ID;	
	}
	int Squad::setID(int a) {
		this->ID = a;
	}
