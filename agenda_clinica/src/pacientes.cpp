/*
 * Pacientes.cpp
 *
 *  Created on: 04/12/2014
 *      Author: i32ribaj
 */

#include "pacientes.h"

Pacientes::Pacientes() {
	// TODO Auto-generated constructor stub
	favorito_ = false;
	frecuente_ = 0;
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

bool Pacientes::isFavorito() const {
	return favorito_;
}

void Pacientes::setFavorito(bool favorito) {
	this->favorito_ = favorito;
}

int Pacientes::getFrecuente() const {
	return frecuente_;
}

void Pacientes::setFrecuente(int frecuente) {
	this->frecuente_ = frecuente;
}

const string& Pacientes::getNotas() const {
	return notas_;
}

const vector<string>& Pacientes::getCorreos() const {
	return correos_;
}

void Pacientes::setCorreos(const vector<string>& correos) {
	correos_ = correos;
}

const vector<string>& Pacientes::getRedSocial() const {
	return redSocial_;
}

void Pacientes::setRedSocial(const vector<string>& redSocial) {
	redSocial_ = redSocial;
}

const vector<string>& Pacientes::getTelefono() const {
	return telefono_;
}

void Pacientes::setTelefono(const vector<string>& telefono) {
	telefono_ = telefono;
}

void Pacientes::setNotas(const string& notas) {
	notas_ = notas;
}

void Pacientes::setNombre(const std::string& nombre) {
	nombre_ = nombre;
}

Pacientes::~Pacientes() {
	// TODO Auto-generated destructor stub
}

