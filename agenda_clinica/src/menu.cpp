#include <iostream>
#include <string>

using namespace std;

int main () {

	int opc1,opc2;
	char aux;
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
		cout << "\n * 9.-Importar copia de seguridad                 *";
		cout << "\n * 10.-Exportar copia de seguridad                 *";
		cout << "\n * 0.-Salir de la aplicación                       *";
		cout << "\n ***************************************************\n >> ";
		cin >> opc1;
		
		switch(opc1) {
		
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
				p.setDNI(cadena);
	
				cout << "\n   * Teléfono >> ";
				getline(cin,cadena);
				p.setTelefono(cadena);
				
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
				getchar();
			
				cout << "\n # Introduce los apellidos del cliente que deseas buscar\n -> ";
				getline(cin,cadena);

				/* Se busca al cliente en la lista y se devuelve la información si se encuentra*/
				break;
			case 4:
				getchar();
			
				cout << "\n # Introduce los apellidos del cliente que deseas modificar\n -> ";
				getline(cin,cadena);



				/* Se busca al cliente en la lista y se devuelve la información si se encuentra*/

				do {

					cout << "\n # Indica qué miembro quieres actualizar del paciente:\n 1.-Nombre\n 2.-Apellidos\n 3.-Dni\n 4.-Teléfonos\n 5.-Correos\n 6.-Notas\n 7.-Añadir/Quitar favoritos\n 0.-Salir y Sobrescribir datos -> ";
					cin >> opc2;

					switch(opc2) {

						case 1:
							cout << "\n # Introduce nuevo Nombre -> ";
							getline(cin,cadena);
							p.setNombre(cadena);
							break;
						case 2:
							cout << "\n # Introduce nuevos Apellidos -> ";
							getline(cin,cadena);
							p.setApellidos(cadena);
							break;
						case 3:
							cout << "\n # Introduce nuevo Dni -> ";
							getline(cin,cadena);
							p.setDni(cadena);
							break;
						case 4:
							cout << "\n # Introduce nuevos Teléfonos -> ";
							getline(cin,cadena);
							p.setTelefonos(cadena);
							break;
						case 5:
							cout << "\n # Introduce nuevos Correos -> ";
							getline(cin,cadena);
							p.setCorreos(cadena);
							break;
						case 6:
							cout << "\n # Introduce nuevas Notas -> ";
							getline(cin,cadena);
							p.setNombre(cadena);
							break;
						case 7:
							cout << "\n # ¿Marcar como favorito? s/n -> ";
							cin >> aux;

							if (aux == 's') {

								setFavorito(true);
							}else{
								setFavorito(false);
							}
							break;
					}
				}while(opc2 != 0);

				/* Función de modificar */

				cout << "\n # Datos modificados con éxito\n # Pulsa Intro para continuar";
				getchar();
				getchar();

				break;
			case 5:	
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
			case 11:		
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
	}while(opc1 != 0);

	return 0;
}
