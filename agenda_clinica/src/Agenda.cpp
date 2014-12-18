/*
 * Agenda.cpp
 *
 *  Created on: 04/12/2014
 *      Author: i32ribaj
 */

#include "Agenda.h"
#include <iostream>
#include <cstring>
	using namespace std;

Agenda::Agenda() {
	// TODO Auto-generated constructor stub

}

Agenda::~Agenda() {
	// TODO Auto-generated destructor stub
}

Agenda::Buscarporapellido() {

	string apellido;
	string Agenda;

	cout << "Introduce el apellido a buscar";
	cin >> apellido;

	cout << "\n";

	Agenda.open("Agenda.txt");

	if(apellido != ""){


		cout << "No existe ningun usuario con ese apellido registrado en nuestra agenda. \n";

	}

	else {

		cout << "El usuario con apellido " << apellido << "se encuentra en el sistema \n";
	}



}
