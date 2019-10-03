#ifndef LAB_7_COMPOSICION_CARRO_H
#define LAB_7_COMPOSICION_CARRO_H

#include"Rueda.h"
#include"Motor.h"
#include"Ventana.h"
#include"Puerta.h"

class Carro {
private:
	string placa;
	int litros;

	Motor motor;
	Puerta puerta;
	Ventana ventana;
	Rueda rueda;

public:
	Carro();
	Carro(string, int, Motor, Puerta, Ventana, Rueda);

	void encenderMotor();
	void abrirPuertas();
	void abrirVentanas();
	void cambiarPresionRueda();

	string toString();

};
#endif //LAB_7_COMPOSICION_CARRO_H