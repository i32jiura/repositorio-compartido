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
	string ficheroAgenda("Agenda.txt");
	string agenda;

	cout << "Introduce el apellido a buscar";
	cin >> apellido;

	cout << "\n";

	while (getline(ficheroAgenda,agenda,', ')){
		while (getline(ficheroAgenda,agenda,', ')){
			while (getline(ficheroAgenda,agenda,', ')){

					if(apellido != agenda){
						cout << "El nombre a buscar no se encuentra registrado en la base de datos. \n";

					}

					else  {

						cout << "Se encuentra en la bd. \n"

						}
					}

			}

		}

}
