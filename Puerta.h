#ifndef LAB_7_COMPOSICION_PUERTA_H
#define LAB_7_COMPOSICION_PUERTA_H
#include "Ventana.h"

class Puerta {
private:
	Ventana* ventana;
	bool estado;
public:
	Puerta();
	Puerta(Ventana*, bool);
	void abrirPuerta();
	void cerrarPuerta();
	void abrirVentana();
	void cerrarVentana();

};


#endif //LAB_7_COMPOSICION_PUERTA_H
