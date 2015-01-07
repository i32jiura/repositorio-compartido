/*
 * pacientes.h
 *
 *  Created on: 04/12/2014
 *      Author: i32ribaj
 */

#ifndef PACIENTES_H_
#define PACIENTES_H_

#include <string>

class Pacientes {

private:
	std::string nombre_;
	std::string apellidos_;
	std::string DNI_;
	int telefono_;

public:
	Pacientes();
	virtual ~Pacientes();
	const std::string& getApellidos() const;
	void setApellidos(const std::string& apellidos);
	const std::string& getDni() const;
	void setDni(const std::string& dni);
	const std::string& getNombre() const;
	void setNombre(const std::string& nombre);
	int getTelefono() const;
	void setTelefono(int telefono);
};

#endif /* PACIENTES_H_ */
