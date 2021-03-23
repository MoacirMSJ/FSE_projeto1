#include "pwm.h"


int criarPinosPWM(int pino1, int pino2){
  wiringPiSetup();
  pinMode(pino1, OUTPUT);
  pinMode(pino2, OUTPUT);

  if(softPwmCreate (pino1, 0, 100) !=0){
    printf("Erro ao criar pino PWM %d.\n",pino1);
    return -1;
  }
  if(softPwmCreate (pino2, 0, 100) !=0){
    printf("Erro ao criar pino PWM %d.\n",pino2);
    return -1;
  }

  return 1;
}

void enviarIntensidadePWM(int pino, int pid_intensidade){
  softPwmWrite (pino, pid_intensidade);
}

void zeraIntensidadePWM(int pino1, int pino2){
  softPwmWrite (pino1, 0);
  softPwmWrite (pino2, 0);

  // printf("-> Ventoinha e resistor desligaods...\n");
}

// int w = wiringPiSetup();
//     if(w < 0){
//         printf("erro ao iniciar wiringPi");
//         exit(1);
//     }

//     pinMode(pino,OUTPUT);
//     softPwmCreate(pino,0,100);
//     softPwmWrite(pino, pwm);