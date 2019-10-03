#include "Motor.h"

Motor::Motor() {
}

Motor::Motor(bool esta) {
	estado = esta;
}

void Motor::encender() {
	estado = true;
}

void Motor::apagar() {
	estado = false;
}
