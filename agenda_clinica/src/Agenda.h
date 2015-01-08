/*
 * Agenda.h
 *
 *  Created on: 04/12/2014
 *      Author: i32ribaj
 */

#ifndef AGENDA_H_
#define AGENDA_H_

#include <list>
#include "Pacientes.h"

using namespace std;

class Agenda {

private:
	list<Pacientes> listaContactos_;

	void cargarEnLista();
	void actualizarFichero();
	bool ordenar();

public:
	Agenda();
	virtual ~Agenda();



	void ordenarFichero();
	void introducirPaciente(Pacientes p);
	bool borrarPaciente(const std::string& apellidos);
	void importarCopia();
	void imprimir();
	const list<Pacientes>& getListaContactos() const;
	void setListaContactos(const list<Pacientes>& listaContactos);
};

#endif /* AGENDA_H_ */
