/*
 * Agenda.h
 *
 *  Created on: 04/12/2014
 *      Author: i32ribaj
 */

#ifndef AGENDA_H_
#define AGENDA_H_

#include <list>

class Agenda {

private:
	std::list<pacientes> listaContactos_;


public:
	Agenda();
	virtual ~Agenda();

	void ordenarFichero();
};

#endif /* AGENDA_H_ */
