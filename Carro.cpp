#include "Carro.h"

Carro::Carro() {
	placa = "";
	litros = 0;
}

Carro::Carro(string plc, int lit, Motor mot, Puerta puert, Ventana vent, Rueda rued) {
	placa = plc;
	litros = lit;
	motor = mot;
	puerta = puert;
	ventana = vent;
	rueda = rued;
}

void Carro::encenderMotor() {
	motor.encender();
}

void Carro::abrirPuertas() {
	puerta.abrirPuerta();
}

void Carro::abrirVentanas() {
	ventana.abrir();
}

void Carro::cambiarPresionRueda() {
	rueda.Tamanio();
}

string Carro::toString() {
	stringstream s;
	s << "La placa del Carro es: " << placa << endl;
	s << "Los Litros del Carro son: " << litros << endl;
	return s.str();
}