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

	// Abrimos el fichero de la copia de seguridad que se pasa como parametro
	ficheroCopia.open(rutaArchivo.c_str());

	// Comprobamos que el archivo se ha abierto correctamente
	if (!ficheroCopia) {
		cout << "Ocurrió un error cuando se intentaba acceder a la copia de seguridad." << endl;
		exit(-1);
	}

	// Abrimos el fichero de la agenda en modo escritura, para escribir al fianl del fichero
	ficheroAgendaW.open("Agenda.txt", ofstream::app);

	// Comprobamos que el archivo se ha abierto correctamente
	if (!ficheroAgendaW) {
		cout << "Ocurrió un error cuando se intentaba acceder a la agenda modo escritura." << endl;
		exit(-1);
	}

	// Recorremos los ficheros para encontrar duplucados e insertarlos.
	while (getline(ficheroCopia, lineaCopia, '\n')) {

		// Obtenemos el DNI del archivo de la copia de seguridad para compararlo
		DNI = lineaCopia.substr(0, 9);

		// Abrimos el archivo de la Agenda en modo lectura para comparar
		ficheroAgendaR.open("Agenda.txt");

		// Comprobamos que el archivo se ha abierto correctamente
		if (!ficheroAgendaR) {
			cout << "Ocurrió un error cuando se intentaba acceder a la agenda." << endl;
			exit(-1);
		}

		// Recorremos el fichero de la agenda para comparar con los datos de la copia de seguridad.
		while (getline(ficheroAgendaR, lineaAgenda, '\n')) {

			// Obtenemos el DNI del archivo de la agenda para compararlo
			DENI = lineaAgenda.substr(0, 9);

			// Si el DNI ha aparecido, ponemos el auxiliar a 0 para no introducir
			if ((DNI.compare(DENI)) == 0) {

				aux = 0;
			}

		}

		// Cerramos el fichero de agenda en modo lectura.
		ficheroAgendaR.close();

		// Si el DNI no ha aparecido aux deberia ser 1 y se introduce al final del fichero.
		if (aux == 1) {
			ficheroAgendaW << "\n";
			ficheroAgendaW << lineaCopia.c_str();
		}

		// Ponemos aux a 1 para la siguiente vuelta del bucle.
		aux = 1;
	}

	// Cerramos los ficheros de agenda y copia de seguridad
	ficheroCopia.close();
	ficheroAgendaW.close();

}
