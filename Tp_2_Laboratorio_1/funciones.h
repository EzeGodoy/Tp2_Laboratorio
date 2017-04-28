#include <stdio.h>
#include <stdlib.h>
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;


void inicioEstado(EPersona registro[]);//Inicio la busqueda por el array


int menu(char mensaje[],char error[]);//Eligo las opciones por el menu


void ingreso(EPersona registro[]);//Ingreso los datos de la persona: nombre, edad, DNI


int borrar(EPersona registro[]);//Borro a una persona por medio del DNI, antes informo a quien va a borrar


void imprimir(EPersona registro[]);//Imprimo en orden alfabetico todas las personas que fueron cargadas al programa


void grafico(EPersona registro[],int a, int b,int c,int d);//Realizo un grafico con las edades menores a 18, entre 19 y 35 y mayores a 35


#endif // FUNCIONES_H_INCLUDED
