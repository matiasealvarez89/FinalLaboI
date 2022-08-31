#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Cachorro.h"
#include "pedidoDatos.h"
#include "LinkedList.h"


Cachorro* Cachorro_new()
{
	Cachorro* pNuevaCachorro;

	pNuevaCachorro = NULL;
	pNuevaCachorro = (Cachorro*)calloc(sizeof(Cachorro),1);

	return pNuevaCachorro;
}

Cachorro* Cachorro_newParametros(char* idStr, char* nombreStr, char* diasStr, char* razaStr, char* reservadoStr, char* generoStr)
{
	Cachorro* pNuevaCachorro = NULL;
	Cachorro* pCachorroAux;
	int auxID;
	int auxdias;

	pCachorroAux = Cachorro_new();

	if(pCachorroAux != NULL && idStr != NULL && nombreStr != NULL && diasStr != NULL && razaStr != NULL && reservadoStr != NULL && generoStr != NULL)
	{
		auxID = atoi(idStr);
		auxdias = atoi(diasStr);

		if(!Cachorro_setAll(pCachorroAux, auxID, nombreStr, auxdias, razaStr, reservadoStr, generoStr))
		{
			pNuevaCachorro = pCachorroAux;
		}
	}

	return pNuevaCachorro;
}

int Cachorro_setId(Cachorro* this, int id)
{
	int retorno;
	retorno = -1;

	if(this != NULL && id >= 0)
	{
		this->id = id;
		retorno = 0;
	}


	return retorno;
}

int Cachorro_GetId(Cachorro* this, int* id)
{
	int retorno;
	retorno = -1;

	if(this != NULL && id != NULL)
	{
		*id = this->id;
		retorno = 0;
	}


	return retorno;
}

int Cachorro_setNombre(Cachorro* this, char* nombreCachorro)
{
	int retorno;
	retorno = -1;

	if(this != NULL && nombreCachorro != NULL)
	{
		strcpy(this->nombreCachorro, nombreCachorro);
		retorno = 0;
	}


	return retorno;
}

int Cachorro_getNombre(Cachorro* this, char* nombreCachorro)
{
	int retorno;
	retorno = -1;

	if(this != NULL && nombreCachorro != NULL)
	{
		strcpy(nombreCachorro, this->nombreCachorro);
		retorno = 0;
	}


	return retorno;
}

int Cachorro_setdias(Cachorro* this, int dias)
{
	int retorno;
	retorno = -1;

	if(this != NULL && dias >= 0)
	{
		this->dias = dias;
		retorno = 0;
	}


	return retorno;
}

int Cachorro_Getdias(Cachorro* this, int* dias)
{
	int retorno;
	retorno = -1;

	if(this != NULL && dias != NULL)
	{
		*dias = this->dias;
		retorno = 0;
	}


	return retorno;
}

char Cachorro_setraza(Cachorro* this, char* raza)
{
	int retorno;
		retorno = -1;

		if(this != NULL && raza != NULL)
		{
			strcpy(this->raza, raza);
			retorno = 0;
		}


		return retorno;
}

char Cachorro_Getraza(Cachorro* this, char* raza)
{
	int retorno;
		retorno = -1;

		if(this != NULL && raza != NULL)
		{
			strcpy(raza, this->raza);
			retorno = 0;
		}


		return retorno;
}

char Cachorro_setreservado(Cachorro* this, char* reservado)
{
	int retorno;
	retorno = -1;

	if(this != NULL && reservado >= 0)
	{
		strcpy(this->reservado, reservado);
		retorno = 0;
	}


	return retorno;
}

int Cachorro_Getreservado(Cachorro* this, char* reservado)
{
	int retorno;
	retorno = -1;

	if(this != NULL && reservado != NULL)
	{
		strcpy(reservado, this->reservado);
		retorno = 0;
	}


	return retorno;
}

char Cachorro_setgenero(Cachorro* this, char* genero)
{
	int retorno;
	retorno = -1;

	if(this != NULL && genero >= 0)
	{
		strcpy(this->genero, genero);
		retorno = 0;
	}


	return retorno;
}

char Cachorro_Getgenero(Cachorro* this, char* genero)
{
	int retorno;
	retorno = -1;

	if(this != NULL && genero != NULL)
	{
		strcpy(genero, this->genero);
		retorno = 0;
	}


	return retorno;
}



int Cachorro_setAll(Cachorro* this, int id, char* nombre, int dias, char* raza, char* reservado, char* genero)
{
	int retorno = -1;

	if(this != NULL && !Cachorro_setId(this, id) && !Cachorro_setNombre(this, nombre) && !Cachorro_setdias(this, dias) && !Cachorro_setraza(this, raza)
			&& !Cachorro_setreservado(this, reservado) && !Cachorro_setgenero(this, genero))
	{
		retorno = 0;
	}

	return retorno;
}

int Cachorro_getAll(Cachorro* this, int* id, char* nombre, int* dias, char* raza, char* reservado, char* genero)
{
	int retorno = -1;

	if(this != NULL && !Cachorro_GetId(this, id) && !Cachorro_getNombre(this, nombre) && !Cachorro_Getdias(this, dias) && !Cachorro_Getraza(this, raza)
			&& !Cachorro_Getreservado(this, reservado) && !Cachorro_Getgenero(this, genero))
	{
		retorno = 0;
	}

	return retorno;
}




void Cachorro_printUnCachorro(Cachorro* this)
{
	int auxId;
	char auxNombre[50];
	int auxdias;
	char auxraza[50];
	char auxreservado[50];
	char auxGenero[50];

	if(!Cachorro_getAll(this, &auxId, auxNombre, &auxdias, auxraza, auxreservado, auxGenero))
	{

		printf("%d\t%s\t\t%d\t\t%s\t\t%s\t\t%s\t\t\n", auxId, auxNombre, auxdias, auxraza, auxreservado, auxGenero);
	}

}


int Cachorro_compareByNombre(void* CachorroUno, void* CachorroDos)
{
	int retorno;
	char auxCachorroUno[50];
	char auxCachorroDos[50];

	if(CachorroUno != NULL && CachorroDos != NULL)
	{
		Cachorro_getNombre(CachorroUno, auxCachorroUno);
		Cachorro_getNombre(CachorroDos, auxCachorroDos);

		retorno = strcmp(auxCachorroUno, auxCachorroDos);
	}


	return retorno;
}

int Cachorro_menor45Dias(void* this)
{
	int retorno = 0;
	int auxDias;

	Cachorro_Getdias(this, &auxDias);

	if(auxDias < 45)
	{
		retorno = 1;
	}


	return retorno;
}

int Cachorro_machos(void* this)
{
	int retorno = 0;
	char auxGenero[50];
	Cachorro* pCachorro;

	pCachorro = (Cachorro*)this;
	Cachorro_Getgenero(pCachorro, auxGenero);

	if(strcmp(auxGenero, "M") != 0)
	{
		retorno = 1;
	}


	return retorno;
}

int Cachorro_callejeros(void* this)
{
	int retorno = 0;
	char auxRaza[50];
	Cachorro* pCachorro;
	int auxRetorno;

	pCachorro = (Cachorro*)this;
	Cachorro_Getraza(pCachorro, auxRaza);

	auxRetorno = strcmp(auxRaza, "Callejero");

	if(auxRetorno == 0)
	{

		retorno = 1;
	}

	return retorno;
}
