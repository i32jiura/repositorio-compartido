/*
 * Agenda.cpp
 *
 *  Created on: 04/12/2014
 *      Author: i32ribaj
 */

#include "Agenda.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

Agenda::Agenda() {
	// TODO Auto-generated constructor stub

}

Agenda::~Agenda() {
	// TODO Auto-generated destructor stub
}

void Agenda::importarCopia() {

	ifstream ficheroCopia;
	ifstream ficheroAgendaR;
	ofstream ficheroAgendaW;
	string rutaArchivo;
	string lineaAgenda;
	string lineaCopia;
	string DNI;
	string DENI;
	int aux = 1;

	// Peticion por pantalla del nombre del archivo a importar
	cout << "Introduce la ruta del archivo a importar: ";
	cin >> rutaArchivo;

	// Abrimos los ficheros.
	ficheroCopia.open(rutaArchivo.c_str());

	if (!ficheroCopia) {
		cout
				<< "Ocurrió un error cuando se intentaba acceder a la agenda modo lectura."
				<< endl;
		//exit(-1);
	}

	ficheroAgendaW.open("Agenda.txt", ofstream::app);

	if (!ficheroAgendaW) {
		cout
				<< "Ocurrió un error cuando se intentaba acceder a la agenda modo escritura."
				<< endl;
		//exit(-1);
	}

	// Recorremos los ficheros para encontrar duplucados e insertarlos.
	while (getline(ficheroCopia, lineaCopia, '\n')) {

		DNI = lineaCopia.substr(0, 9);

		cout << "FICHERO COPIA = " + DNI + "\n";

		ficheroAgendaR.open("Agenda.txt");

		if (!ficheroAgendaR) {
			cout
					<< "Ocurrió un error cuando se intentaba acceder al archivo de copia de seguridad."
					<< endl;
			//exit(-1);
		}

		while (getline(ficheroAgendaR, lineaAgenda, '\n')) {

			DENI = lineaAgenda.substr(0, 9);

			cout << "FICHERO AGENDA = " + DENI + "\n";

			if ((DNI.compare(DENI)) == 0) {

				aux = 0;
			}

		}

		ficheroAgendaR.close();

		if (aux == 1) {
			ficheroAgendaW << "\n";
			ficheroAgendaW << lineaCopia.c_str();
		}

		aux = 1;
	}

}
