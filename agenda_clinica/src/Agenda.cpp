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
#include <cstdlib>
#include <iomanip>
#include <list>



using namespace std;


Agenda::Agenda() {
	// TODO Auto-generated constructor stub

	cargarEnLista();


	list<Pacientes>::iterator i;

	for(i=listaContactos_.begin();i != listaContactos_.end();i++) {

			cout << "Lista LAMA -> [" << i->getNombre() << "] , [" << i->getApellidos() << "] , [" << i->getDni() << "]\n";
		}

}


Agenda::~Agenda() {
	// TODO Auto-generated destructor stub
}


bool ordenar(const Pacientes& p1,const Pacientes& p2){

	return p1.getApellidos() < p2.getApellidos();

}

void Agenda::ordenarFichero() {


	cargarEnLista();

	//listaContactos_.sort();

	list<Pacientes>::iterator i;

	for(i=listaContactos_.begin();i != listaContactos_.end();i++) {

				cout << "Lista LAMA -> : " << i->getNombre() << "," << i->getApellidos() << "," << i->getDni() << "," << "\n";
			}

}

void Agenda::cargarEnLista() {

	ifstream entrada ("Agenda.txt");
	string nombre,apellidos,DNI,telefono;
	string telefono1, telefono2,correo1,correo2;
	string notas;
	string favorito;
	string frecuente,direccion;
	string twitter,facebook;

	Pacientes p;
	vector <string> auxiliar_;

	listaContactos_.clear();
	
	while (getline(entrada, DNI, ',' ))
	{
	
		getline(entrada, nombre, ',' );
		getline(entrada, apellidos, ',' );
		getline(entrada, direccion, ',' );
		getline(entrada, telefono1, ',' );
		getline(entrada, telefono2, ',' );
		getline(entrada, correo1, ',' );
		getline(entrada, correo2, ',' );
		getline(entrada, twitter, ',' );
		getline(entrada, facebook, ',' );
		getline(entrada, notas, ',' );
		getline(entrada, favorito, ',' );
		getline(entrada, frecuente);


		auxiliar_.push_back(telefono1);
		auxiliar_.push_back(telefono2);
		p.setTelefono(auxiliar_);

		auxiliar_.push_back(correo1);
		auxiliar_.push_back(correo2);
		p.setCorreos(auxiliar_);

		auxiliar_.push_back(twitter);
		auxiliar_.push_back(facebook);
		p.setRedSocial(auxiliar_);

		p.setNombre(nombre);
		p.setApellidos(apellidos);
		p.setDni(DNI);
		p.setNotas(notas);
		p.setDireccion(direccion);

		if (favorito.compare("Si") == 0)
		{
			p.setFavorito(true);
		}
		else
		{
			p.setFavorito(false);
		}

		p.setFrecuente(atoi(frecuente.c_str()));

		listaContactos_.push_back(p);
	}

	entrada.close();
}

void Agenda::actualizarFichero() {

	string nomfich = "Agenda.txt";
	ofstream salida(nomfich.c_str(),ofstream::app);
	list<Pacientes>::iterator i;
	


	for(i=listaContactos_.begin();i != listaContactos_.end();i++) {

		salida << i->getNombre() << "," << i->getApellidos() << "," << i->getDni() << "," << "\n";
	}
	
	salida.close();
}


void Agenda::introducirPaciente(Pacientes p) {

	listaContactos_.clear();

	cargarEnLista();

	listaContactos_.push_back(p);

	actualizarFichero();


}

bool Agenda::borrarPaciente(const std::string& apellidos) {

	cargarEnLista();

	list<Pacientes>::iterator i;

	for(i=listaContactos_.begin();i != listaContactos_.end();i++) {

		if (apellidos == i->getApellidos() ) {

			listaContactos_.erase(i);
			actualizarFichero();
			return true;
		}
	}

	return false;
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
		cout
				<< "Ocurrió un error cuando se intentaba acceder a la copia de seguridad."
				<< endl;
		//exit(-1);
	}

	// Abrimos el fichero de la agenda en modo escritura, para escribir al fianl del fichero
	ficheroAgendaW.open("Agenda.txt", ofstream::app);

	// Comprobamos que el archivo se ha abierto correctamente
	if (!ficheroAgendaW) {
		cout
				<< "Ocurrió un error cuando se intentaba acceder a la agenda modo escritura."
				<< endl;
		//exit(-1);
	}

	// Recorremos los ficheros para encontrar duplucados e insertarlos.
	while (getline(ficheroCopia, lineaCopia, '\n')) {

		// Obtenemos el DNI del archivo de la copia de seguridad para compararlo
		DNI = lineaCopia.substr(0, 9);

		// Abrimos el archivo de la Agenda en modo lectura para comparar
		ficheroAgendaR.open("Agenda.txt");

		// Comprobamos que el archivo se ha abierto correctamente
		if (!ficheroAgendaR) {
			cout << "Ocurrió un error cuando se intentaba acceder a la agenda."
					<< endl;
			//exit(-1);
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

const list<Pacientes>& Agenda::getListaContactos() const {
	return listaContactos_;
}

void Agenda::setListaContactos(const list<Pacientes>& listaContactos) {
	listaContactos_ = listaContactos;
}

void Agenda::imprimir() {


	ifstream ficheroAgendaR;
	string lineaAgenda;

	// Abrimos el archivo de la Agenda en modo lectura.
	ficheroAgendaR.open("Agenda.txt");

	// Comprobamos que el archivo se ha abierto correctamente
	if (!ficheroAgendaR) {
		cout << "Ocurrió un error cuando se intentaba acceder a la agenda."
				<< endl;
		//exit(-1);
	}

	// Formateado para mejor visuacizacion
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "DNI" << setw(30) << "NOMBRE" << setw(30) << "APELLIDOS" << setw(30) << "DIRECCION" << setw(30) << "TELEFONO" << setw(30) << "EMAIL" << setw(30) << "ANOTACIONES" << setw(30) <<  "FAVORITO" << setw(30) << "RED SOCIAL" << setw(30) << "MAS USADO\n";
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	// Recorremos el fichero de la agenda.
	while (getline(ficheroAgendaR, lineaAgenda, ',')) {

		cout << lineaAgenda << " " << setw(27 - lineaAgenda.size()) << " ";
	}

	// Formateado para mejor visuacizacion
	cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	// Cerramos el fichero de agenda en modo lectura.
	ficheroAgendaR.close();

}

