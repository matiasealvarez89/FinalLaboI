

#ifndef Cachorro_H_
#define Cachorro_H_

#include "LinkedList.h"


typedef struct
{
	int id;
	char nombreCachorro[50];
	int dias;
	char raza[50];
	char reservado[50];
	char genero[50];
}Cachorro;

#endif /* Cachorro_H_ */

//int Cachorro_GetMonto(Cachorro* this, float* monto);
//int Cachorro_setMonto(Cachorro* this, float monto);
//void Cachorro_CalcularMonto(Cachorro* this);
//int Cachorro_GetcantidadEntradas(Cachorro* this, int* entradas);
//int Cachorro_setcantidadEntradas(Cachorro* this, int entradas);
//int Cachorro_GetSala(Cachorro* this, int* sala);
//int Cachorro_setSala(Cachorro* this, int sala);
//int Cachorro_GetHora(Cachorro* this, char* horario);
//int Cachorro_setHora(Cachorro* this, char* horario);
//int Cachorro_GetDias(Cachorro* this, int* dia);
//int Cachorro_setDias(Cachorro* this, int dia);
//int Cachorro_getNombre(Cachorro* this, char* nombrePelicula);
//int Cachorro_setNombre(Cachorro* this, char* nombrePelicula);
//int Cachorro_GetId(Cachorro* this, int* id);
//int Cachorro_setId(Cachorro* this, int id);
//Cachorro* Cachorro_newParametros(char* idStr, char* nombreStr, char* diaStr, char* horarioStr, char* reservadoStr, char* generoStr);
//Cachorro* Cachorro_new();
//int Cachorro_setAll(Cachorro* this, int id, char* nombre, int dias, char* raza, char* reservado, char* genero);
//int Cachorro_getAll(Cachorro* this, int* id, char* nombre, int* dias, char* raza, char* reservado, char* genero);
//void Cachorro_printUnCachorro(Cachorro* this);
//void Cachorro_printUnCachorroConMonto(Cachorro* this);
//int Cachorro_getAllConMonto(Cachorro* this, int* id, char* nombre, int* dia, char* horario, int* sala, int* entradas, float* monto);
//int Cachorro_compareByNombre(void* CachorroUno, void* CachorroDos);
//int Cachorro_Getreservado(Cachorro* this, char* reservado);
//char Cachorro_setreservado(Cachorro* this, char* reservado);
//char Cachorro_Getgenero(Cachorro* this, char* genero);
//char Cachorro_setgenero(Cachorro* this, char* genero);
//int Cachorro_menor45Dias(Cachorro* this);

Cachorro* Cachorro_new();
Cachorro* Cachorro_newParametros(char* idStr, char* nombreStr, char* diasStr, char* razaStr, char* reservadoStr, char* generoStr);
int Cachorro_setId(Cachorro* this, int id);
int Cachorro_GetId(Cachorro* this, int* id);
int Cachorro_setNombre(Cachorro* this, char* nombreCachorro);
int Cachorro_getNombre(Cachorro* this, char* nombreCachorro);
int Cachorro_setdias(Cachorro* this, int dias);
int Cachorro_Getdias(Cachorro* this, int* dias);
char Cachorro_setraza(Cachorro* this, char* raza);
char Cachorro_Getraza(Cachorro* this, char* raza);
char Cachorro_setreservado(Cachorro* this, char* reservado);
int Cachorro_Getreservado(Cachorro* this, char* reservado);
char Cachorro_setgenero(Cachorro* this, char* genero);
char Cachorro_Getgenero(Cachorro* this, char* genero);
int Cachorro_setAll(Cachorro* this, int id, char* nombre, int dias, char* raza, char* reservado, char* genero);
int Cachorro_getAll(Cachorro* this, int* id, char* nombre, int* dias, char* raza, char* reservado, char* genero);
void Cachorro_printUnCachorro(Cachorro* this);
int Cachorro_compareByNombre(void* CachorroUno, void* CachorroDos);
int Cachorro_menor45Dias(void* this);
int Cachorro_machos(void* this);
int Cachorro_callejeros(void* this);



