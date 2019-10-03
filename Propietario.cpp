#include "Propietario.h"

Propietario::Propietario() {
	nombre = "";

}

Propietario::Propietario(string nom) {
	nombre = nom;
}

string Propietario::toString() {
	stringstream s;
	s << "Nombre del Propietario: " << nombre << endl;
	return s.str();
}
