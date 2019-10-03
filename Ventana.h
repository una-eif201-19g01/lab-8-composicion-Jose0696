#ifndef LAB_7_COMPOSICION_VENTANA_H
#define LAB_7_COMPOSICION_VENTANA_H
#include<iostream>
#include<string>
#include<sstream>

using namespace std;
class Ventana {
private:
	bool polarizada;
	bool electrica;
	bool estado;

public:
	Ventana();
	Ventana(bool, bool, bool);
	void abrir();
	void cerrar();

};


#endif //LAB_7_COMPOSICION_VENTANA_H
