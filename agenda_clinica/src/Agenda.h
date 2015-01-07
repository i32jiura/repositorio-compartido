/*
 * Agenda.h
 *
 *  Created on: 04/12/2014
 *      Author: i32ribaj
 */

#ifndef AGENDA_H_
#define AGENDA_H_

#include <list>
#include "pacientes.h"

using namespace std;

class Agenda {

private:
	list<Pacientes> listaContactos_;


public:
	Agenda();
	virtual ~Agenda();

	void importarCopia();
};

#endif /* AGENDA_H_ */
