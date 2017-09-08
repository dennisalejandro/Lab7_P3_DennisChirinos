//Clases
#include "Soldado.h"
#include "Asesino.h"
#include "Arquero.h"
#include "Coraza.h"
#include "Squad.h"
//STD
#include <string>
#include <iostream>
#include <vector>
//#include <>
using namespace std;
int Menu();
int Menu2();
int main() {
	vector<Squad*>* Army1 = new vector<Squad*>();
	vector<Squad*>* Army2 = new vector<Squad*>();
	int Sq1Num=0;
	int Sq2Num=0;
	int numSq=0;
	int numSq2=0;
	int op = 0;
	int opA = 0;
	int opB = 0;
	int opC = 0;
	int opSq1A = 0;
	int opSq1B = 0;
	int opSq2A = 0;
	int opSq2B = 0;
	bool isPossible = false;
	while (op!=5) {
		op = Menu();
		switch (op) {
			case 1: {
					cout << "Para que ejercito?" <<"\n";
					cin >> opA;
					if (opA == 1) {
						Squad* A = new Squad(0,0,Sq1Num);
						Sq1Num++;
						Army1->push_back(A);
						numSq++;
					} else if (opA == 2) {
						Squad* B = new Squad(0,0,Sq2Num);
						Sq2Num++;
						Army2->push_back(B);
						numSq2++;
					} else {
						
					}
					
				}
				break;
			case 2: {
					cout << "Para que ejercito?" <<"\n";
					cin >> opA;
					cout << "Para que escuadron?" <<"\n";
					cin >> opB;
					cout << "que tipo de soldado?" <<"\n";
					opC = Menu2();
					if (opC == 1) {
						cout << "Nombre, Ciudad, Edad, y Stats?" <<"\n";
						string Nombre;
						string Ciudad;
						int Edad;
						int Flechas;
						int Precision;
						cin >> Nombre;
						cin >> Ciudad;
						cin >> Edad;
						cin >> Flechas;
						cin >> Precision;
						Arquero* Ar = new Arquero(Nombre, Ciudad, Edad, Flechas, Precision);
						if (opA == 1) {
							if (opB >= 0) {
								Army1->at(opB)->vSoldados->push_back(Ar);
							} else {
								cout << "No se pudo agregar, escuadron no existe\n";
							}
						} else if (opA == 2) {
							if (opB >= 0) {
								Army2->at(opB)->vSoldados->push_back(Ar);
							} else {
								cout << "No se pudo agregar, escuadron no existe\n";
							}	
						} else {
						
						}
						
					}
					if (opC == 2) {
						cout << "Nombre, Ciudad, Edad, y Stats?" <<"\n";
						string Nombre;
						string Ciudad;
						int Edad;
						int Dureza;
						int Lanzas;
						cin >> Nombre;
						cin >> Ciudad;
						cin >> Edad;
						cin >> Dureza;
						cin >> Lanzas;
						Coraza* Co = new Coraza(Nombre, Ciudad, Edad, Dureza, Lanzas);
						if (opA == 1) {
							Army1->at(opB)->vSoldados->push_back(Co);
						} else if (opA == 2) {
							Army2->at(opB)->vSoldados->push_back(Co);
						} else {
						
						}
					}
					if (opC == 3) {
						cout << "Nombre, Ciudad, Edad, y Stats?" <<"\n";
						string Nombre;
						string Ciudad;
						int Edad;
						int Kills;
						int Skills;
						cin >> Nombre;
						cin >> Ciudad;
						cin >> Edad;
						cin >> Kills;
						cin >> Skills;
						Asesino* As = new Asesino(Nombre, Ciudad, Edad, Kills, Skills);
						if (opA == 1) {
							Army1->at(opB)->vSoldados->push_back(As);
						} else if (opA == 2) {
							Army2->at(opB)->vSoldados->push_back(As);
						} else {
						
						}
					}
				}
				break;
			case 3:
				for (int i = 0;i < Army1->size();i++) {
					cout << "Army 1, Squad: " << i << "\n";
					for (int j = 0;j<Army1->at(i)->vSoldados->size();j++) {
						cout << j << ") " << Army1-> at(i) -> vSoldados-> at(j) ->getNombre() << "\n";
					}
				}
				for (int i = 0;i < Army2->size();i++) {
					cout << "Army 2, Squad: " << i << "\n";
					for (int j = 0;j<Army2->at(i)->vSoldados->size();j++) {
						cout << j << ") " << Army2-> at(i) -> vSoldados-> at(j) ->getNombre() << "\n";
					}
				}
				break;
			case 4: {
					if (numSq >= 4) { 
						isPossible = true;
						int Power1 = 0;
						int Power2 = 0;
						int Def1 = 0;
						int Def2 = 0;
						if ((Army1->size()) < 1) {
							isPossible = false;
						}
						if ((Army2->size()) < 1) {
							isPossible = false;
						}
						for (int i = 0;i < Army1->size();i++) {
							for (int j = 0;j < Army1->at(i)->vSoldados->size();j++) {
								Power1 += Army1->at(i)->vSoldados->at(j)->ATK();
								cout << "Power: " << Army1->at(i)->vSoldados->at(j)->ATK() << "\n";
							}
							for (int j = 0;j < Army1->at(i)->vSoldados->size();j++) {
								Def1 += Army1->at(i)->vSoldados->at(j)->DEF();
								cout << "Defense: " << Army1->at(i)->vSoldados->at(j)->DEF() << "\n";
							}
							cout << "El poder de ataque del escuadron " << i << " es: " << Power1 << "\n";
							cout << "El poder de defensa del escuadron " << i << " es: " << Def1 << "\n";
							Army1->at(i)->setATK(Power1);
							Army1->at(i)->setDEF(Def1);
							Power1 = 0;
							Def1 = 0;
						}
					
						for (int i = 0;i < Army2->size();i++) {
							for (int j = 0;j < Army2->at(i)->vSoldados->size();j++) {
								Power2 += Army2->at(i)->vSoldados->at(j)->ATK();
								cout << "Power: " << Army2->at(i)->vSoldados->at(j)->ATK() << "\n";
							}
							cout << "El poder de ataque del escuadron " << i << " es: " << Power2 << "\n";
							Army2->at(i)->setATK(Power2);
							Power2 = 0;
						}
						bool winner = true;
						Squad* S1;
						Squad* S2;
						Squad* S3;
						Squad* S4;
						while (winner) {
							cout << "Army 1 Select your Attack Squad: " << "\n";
							cin >> opSq1A;
						
							cout << "Army 2 Select your Defense Squad: " << "\n";
							cin >> opSq2B;
						
							S1 = Army1->at(opSq1A);
							S2 = Army2->at(opSq2B);
							if ((S1->getATK()) >= (S2->getDEF()*10)) {
								winner = false;
								cout << "El escuadron" << S1->getID() << " Gano la batalla\n";
							} else {
								cout << "El escuadron defendio sucesivamente\n";
							}
							cout << "Army 2 Select your Attack Squad: " << "\n";
							cin >> opSq2A;

							cout << "Army 1 Select your Defense Squad: " << "\n";
							cin >> opSq1B;
							S3 = Army1->at(opSq2A);
							S4 = Army2->at(opSq1B);
							if ((S1->getATK()) >= (S2->getDEF()*10)) {
								winner = false;
								cout << "El escuadron" << S3->getID() << " Gano la batalla\n";
							} else {
								cout << "El escuadron de retaguardia defendio sucesivamente\n";
							}
						}
						delete S1;
						delete S2;
						delete S3;
						delete S4;
					} else {
						cout << "No hay mas de 4 escuadrones \n";
					}
				}				
				break;
			case 5:
				break;
		}
	}
	for (int i = 0;i < Army1->size();i++) {
		for (int j = 0;j<Army1->at(i)->vSoldados->size();j++) {
			delete Army1->at(i)->vSoldados->at(j);
		}
		delete Army1->at(i);
	}
	for (int i = 0;i < Army2->size();i++) {
		for (int j = 0;j<Army2->at(i)->vSoldados->size();j++) {
			delete Army2->at(i)->vSoldados->at(j);
		}
		delete Army2->at(i);
	}
	delete Army1;
	delete Army2;
	return 0;
}
int Menu() {
	int op;
	cout << "1) Crear Escuadron\n";
	cout << "2) Agregar a Escuadron\n";
	cout << "3) Listar Ejercito\n";
	cout << "4) Simulacion!\n";
	cout << "5) Salir\n";
	cout << "\n";
	cin >> op;
	return op;
}
int Menu2() {
	int op;
	cout << "1) Arquero\n";
	cout << "2) Coraza\n";
	cout << "3) Asesino\n";
	cin >> op;
	return op;
}
