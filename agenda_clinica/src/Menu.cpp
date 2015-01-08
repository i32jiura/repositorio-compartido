#include <iostream>
#include <string>
#include "Agenda.h"
#include "Pacientes.h"
#include <cstdlib>
#include <cstdio>

using namespace std;

int main () {

	int opc;
	Agenda a;
	Pacientes p;
	string cadena;

	do {
	
		system("clear");
	
		cout << "\n ***************************************************";
		cout << "\n * # Agenda de Pacientes # | Selecciona una opción *";
		cout << "\n ***************************************************";
		cout << "\n * 1.-Insertar nuevo paciente                      *";
		cout << "\n * 2.-Borrar paciente                              *";
		cout << "\n * 3.-Buscar paciente                              *";
		cout << "\n * 4.-Modificar paciente                           *";
		cout << "\n * 5.-Ordenar lista de pacientes                   *";
		cout << "\n * 6.-Mostrar lista de pacientes                   *";
		cout << "\n * 7.-Mostrar lista de frencuentes                 *";
		cout << "\n * 8.-Mostrar lista de favoritos                   *";
		cout << "\n * 9.-Importar copia de seguridad                  *";
		cout << "\n * 10.-Exportar copia de seguridad                 *";
		cout << "\n * 0.-Salir de la aplicación                       *";
		cout << "\n ***************************************************\n >> ";
		cin >> opc;
		
		switch(opc) {
		
			case 1:
				cout << "\n # Rellena los siguientes campos para el nuevo cliente:\n";	
				getchar();

				cout << "\n   * Nombre >> ";
				getline(cin,cadena);
				p.setNombre(cadena);
	
				cout << "\n   * Apellidos >> ";
				getline(cin,cadena);
				p.setApellidos(cadena);
			
				cout << "\n   * DNI >> ";
				getline(cin,cadena);
				p.setDni(cadena);
	
				cout << "\n   * Teléfono >> ";
				getline(cin,cadena);
				//p.setTelefono(cadena);
				
				a.introducirPaciente(p);

				cout << "\n # Nuevo cliente añadido con éxito\n # Pulsa Intro para continuar";
				getchar();
				break;
			case 2:
				getchar();
			
				cout << "\n # Introduce los apellidos del cliente que deseas borrar\n -> ";
				getline(cin,cadena);
				
				
				if (a.borrarPaciente(cadena) == true) {
				
					cout << "\n # Paciente borrado con éxito de la lista \n";
				}else{
				
					cout << "\n # No se ha encontrado ningún paciente con dichos apellidos en la lista\n";
				}

				cout << "\n # Pulsa Intro para continuar\n";
				getchar();
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:	
				a.ordenarFichero();
				break;
			case 6:		
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:	
				break;
			case 10:		
				break;
			case 0:
				cout << "\n # Saliendo de la aplicación...\n";
				break;

			default:
				cout << "\n # Elige una opción correcta\n # Pulsa Intro para continuar";
				getchar();
				getchar();
				break;
		}
	}while(opc != 0);

	return 0;
}
