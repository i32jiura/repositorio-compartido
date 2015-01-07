/*
 * Pacientes.cpp
 *
 *  Created on: 04/12/2014
 *      Author: i32ribaj
 */

#include "pacientes.h"

Pacientes::Pacientes() {
	// TODO Auto-generated constructor stub
	telefono_ = 0;
}

const std::string& Pacientes::getApellidos() const {
	return apellidos_;
}

void Pacientes::setApellidos(const std::string& apellidos) {
	apellidos_ = apellidos;
}

const std::string& Pacientes::getDni() const {
	return DNI_;
}

void Pacientes::setDni(const std::string& dni) {
	DNI_ = dni;
}

const std::string& Pacientes::getNombre() const {
	return nombre_;
}

void Pacientes::setNombre(const std::string& nombre) {
	nombre_ = nombre;
}

int Pacientes::getTelefono() const {
	return telefono_;
}

void Pacientes::setTelefono(int telefono) {
	telefono_ = telefono;
}

Pacientes::~Pacientes() {
	// TODO Auto-generated destructor stub
}

