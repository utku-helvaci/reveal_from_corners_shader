//#define _GNU_SOURCE
#include <unistd.h>
#include <math.h>   //for modff and etc
#include<stdio.h> //for printf
#include <stdlib.h> //for strol //https://stackoverflow.com/questions/9748393/how-can-i-get-argv-as-int


#define PI 3.1415926538
#define tahPI 4.7123889803
int main(int argc, char *argv[])
{
double iTime = 0.0;

int i = 0;

float sm;
while (1){
float PERIODTT = (strtof(argv[1], NULL))*2.0; 

//float PERIODTT = (strtol(argv[1], NULL, 10))*2.0; //https://stackoverflow.com/a/9748431/10946386

///////

float a =((-copysignf(1.0,(modff((iTime/PERIODTT),&sm))-0.5))+1.0)/2.0; //square signal from https://www.shadertoy.com/view/MtffWs

//float a =((-copysignf(1.0,(modff((iTime/PERIODTT),NULL))-0.5))+1.0)/2.0; //square signal from https://www.shadertoy.com/view/MtffWs

//float a = modff(PERIODTT, &sm);

//float a =((-copysignf(1.0,0.6-0.5))+1.0)/2.0;

//TESTINGBELOW;

//float a = 1.0;

float b=(cosf(iTime+PI*a)+1.0)/2.0;
printf("%f %f %f   %d\n",a ,b ,PERIODTT,i);
sleep(1);
iTime += 0.25;
i++;

}
}
