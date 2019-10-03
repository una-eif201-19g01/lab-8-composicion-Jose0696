#include "Puerta.h"

Puerta::Puerta() {
}

Puerta::Puerta(Ventana* vent, bool esta) {
	ventana = vent;
	estado = esta;
}

void Puerta::abrirPuerta() {
	estado = true;
}

void Puerta::cerrarPuerta() {
	estado = false;
}

void Puerta::abrirVentana() {
	ventana->abrir();
}

void Puerta::cerrarVentana() {
	ventana->cerrar();
}
