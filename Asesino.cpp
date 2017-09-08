#include "Asesino.h"
#include <iostream>
#include <string>
using namespace std;
	Asesino::Asesino(string Nombre, string Ciudad, int Edad, int Kills, int Skills) : Soldado(Nombre, Ciudad, Edad) { 
		setKills(Kills);
		setSkills(Skills);
	}
	void Asesino::setKills(int a) {
		this->Kills = a;
	}
	void Asesino::setSkills(int a) {
		this->Skills = a;
	}
	int Asesino::getKills() {
		return this->Kills;
	}
	int Asesino::getSkills() {
		return this->Skills;
	}
	int Asesino::ATK() {
		int kills = getKills();
		return kills;
	}
	int Asesino::DEF() {
		int ret;
		int def;
		def = this->Skills;
		ret = (def*10);
		return ret;
	}
