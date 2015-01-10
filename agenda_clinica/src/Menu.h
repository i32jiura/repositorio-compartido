#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <list>
#include "Pacientes.h"
#include "Agenda.h"
#include <iomanip>

void mostrar(list<Pacientes> aux)
{	

	vector<string> telefonos;
	vector<string> redesSociales;
	vector<string> correos;
	string favorito;
	list<Pacientes>::iterator i;	


				
// Formateado para mejor visuacizacion
	cout
			<< "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << setw(6) << "DNI" << setw(32) << "NOMBRE" << setw(35) << "APELLIDOS"
			<< setw(55) << "DIRECCION" << setw(35) << "TELEFONO" << setw(55)
			<< "EMAIL" << setw(55) << "ANOTACIONES" << setw(35) << "FAVORITO"
			<< setw(35) << "RED SOCIAL\n";
	cout
			<< "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	for (i = aux.begin(); i != aux.end(); i++) {

		correos = i->getCorreos();
		telefonos = i->getTelefono();
		redesSociales = i->getRedSocial();

		if (i->isFavorito()) {
			favorito = "Si";
		} else {
			favorito = "No";
		}

		cout << i->getDni() << setw(29) << i->getNombre() << setw(35)
				<< i->getApellidos() << setw(55) << i->getDireccion()
				<< setw(35) << telefonos[0] + "-" + telefonos[1] << setw(75)
				<< correos[0] + "-" + correos[1] << setw(35) << i->getNotas()
				<< setw(35) << favorito << setw(35)
				<< redesSociales[0] + "," + redesSociales[1] << "\n";

	}

// Formateado para mejor visuacizacion
	cout
			<< "\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		
				
}

#endif
