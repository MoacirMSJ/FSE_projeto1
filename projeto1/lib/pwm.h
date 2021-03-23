#ifndef PWM_H_
#define PWM_H_

#include <stdio.h>
#include <wiringPi.h>
#include <softPwm.h>

int criarPinosPWM(int pino1, int pino2);
void enviarIntensidadePWM(int pino, int pid_intensidade);
void zeraIntensidadePWM(int p1, int pino2);


#endif /* PWM_H_ */