#include "Ventana.h"

Ventana::Ventana(){
}

Ventana::Ventana(bool pola, bool elec, bool esta){
	polarizada = pola;
	electrica = elec;
	estado = esta;
}

void Ventana::abrir(){
	estado = true;
}

void Ventana::cerrar(){
	estado = false;
}
