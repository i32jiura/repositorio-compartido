/*
 * pacientes.cpp
 *
 *  Created on: 04/12/2014
 *      Author: i32ribaj
 */

#include "pacientes.h"

pacientes::pacientes() {
	// TODO Auto-generated constructor stub
	telefono_ = 0;
}

const std::string& pacientes::getApellidos() const {
	return apellidos_;
}

void pacientes::setApellidos(const std::string& apellidos) {
	apellidos_ = apellidos;
}

const std::string& pacientes::getDni() const {
	return DNI_;
}

void pacientes::setDni(const std::string& dni) {
	DNI_ = dni;
}

const std::string& pacientes::getNombre() const {
	return nombre_;
}

void pacientes::setNombre(const std::string& nombre) {
	nombre_ = nombre;
}

int pacientes::getTelefono() const {
	return telefono_;
}

void pacientes::setTelefono(int telefono) {
	telefono_ = telefono;
}

pacientes::~pacientes() {
	// TODO Auto-generated destructor stub
}

