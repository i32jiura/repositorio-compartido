/*
 * pacientes.h
 *
 *  Created on: 04/12/2014
 *      Author: i32ribaj
 */

#ifndef PACIENTES_H_
#define PACIENTES_H_

#include <string>
#include <vector>

using namespace std;

class Pacientes {

private:
	string nombre_;
	string apellidos_;
	string DNI_;
	vector <string> telefono_;
	vector <string> correos_;
	string notas_;
	string direccion_;
	bool favorito_;
	int frecuente_;
	vector <string> redSocial_;


public:
	Pacientes();
	virtual ~Pacientes();
	const string& getApellidos() const;
	void setApellidos(const string& apellidos);
	const string& getDni() const;
	void setDni(const string& dni);
	const string& getNombre() const;
	void setNombre(const string& nombre);
	bool isFavorito() const;
	void setFavorito(bool favorito);
	int getFrecuente() const;
	void setFrecuente(int frecuente);
	const string& getNotas() const;
	void setNotas(const string& notas);
	const vector<string>& getCorreos() const;
	void setCorreos(const vector<string>& correos);
	const vector<string>& getRedSocial() const;
	void setRedSocial(const vector<string>& redSocial);
	const vector<string>& getTelefono() const;
	void setTelefono(const vector<string>& telefono);
	const string& getDireccion() const;
	void setDireccion(const string& direccion);
};

#endif /* PACIENTES_H_ */
