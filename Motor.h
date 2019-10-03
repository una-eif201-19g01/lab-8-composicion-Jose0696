#ifndef LAB_7_COMPOSICION_MOTOR_H
#define LAB_7_COMPOSICION_MOTOR_H


class Motor {
private:
	bool estado;

public:
	Motor();
	Motor(bool);
	void encender();
	void apagar();
};


#endif //LAB_7_COMPOSICION_MOTOR_H
