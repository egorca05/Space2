#pragma once
#include "system.h"


using namespace std;
void Creater();
void FirstMenu();
void MenuMaskaMacros();
void lab2_1();
void lab2_2();
//void lab3_1();
//void lab3_2();
void lab4();
#define UN unsigned
#define Uchar unsigned char
#define BYTE unsigned char
#define unit unsigned int
#define LINES(a) for (int ii=0; ii<a;ii++) cout<<endl
#define PAUSE LINES(2); system("pause")
#define CLEAR system("cls")
#define CLS system("cls")
// Макросы
#define HIGH(a) (a >> (sizeof(a)*4))