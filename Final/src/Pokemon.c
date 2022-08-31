#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pedidoDatos.h"
#include "LinkedList.h"
#include "Pokemon.h"

/// @brief funcion para crear espacio en memoria para un pokemon nulo
///
/// @return puntero a la direccion de memoria del pokemon creado
Pokemon* Pokemon_New()
{
	Pokemon* pNuevaPokemon;

	pNuevaPokemon = NULL;
	pNuevaPokemon = (Pokemon*)calloc(sizeof(Pokemon),1);

	return pNuevaPokemon;
}

/// @brief funcion para crear un pokemon con sus datos cargados
///
/// @param numeroStr string del numero de pokemon
/// @param nombreStr string del nombre del pokemon
/// @param tipoStr string del tipo del pokemon
/// @param tamanioStr string del tamaño del pokemon
/// @param ataqueCargadoStr string del nombre del ataque cargado del pokemon
/// @param valorAtaqueStr string del valor de ataque del pokemon
/// @param esVaricolorStr string de esVaricolor del pokemon
/// @return retorna el puntero al nuevo pokeomon
Pokemon* Pokemon_NewParametros(char* numeroStr, char* nombreStr, char* tipoStr, char* tamanioStr, char* ataqueCargadoStr, char* valorAtaqueStr, char* esVaricolorStr)
{
	Pokemon* pNuevaPokemon = NULL;
	Pokemon* pPokemonAux;
	int auxNumero;
	int auxValorAtaqueStr;
	int auxEsVaricolorStr;

	pPokemonAux = Pokemon_New();

	if(pPokemonAux != NULL && numeroStr != NULL && nombreStr != NULL && valorAtaqueStr != NULL && esVaricolorStr != NULL && tipoStr != NULL && tamanioStr != NULL)
	{
		auxNumero = atoi(numeroStr);
		auxValorAtaqueStr = atoi(valorAtaqueStr);
		auxEsVaricolorStr = atoi(esVaricolorStr);


		if(!Pokemon_SetAll(pPokemonAux, auxNumero, nombreStr, tipoStr, tamanioStr, ataqueCargadoStr, auxValorAtaqueStr, auxEsVaricolorStr))
		{
			pNuevaPokemon = pPokemonAux;
		}
	}

	return pNuevaPokemon;
}

/// @brief funcion para borrar un pokemon
///
/// @param this puntero al pokemon a borrar
void Pokemon_delete(Pokemon* this)
{
	if(this != NULL)
	{
		free(this);
	}
}

/// @brief funcion para setear el numero de un pokemon
///
/// @param this puntero al pokemon
/// @param numero numero del pokemon
/// @return -1 si da error 0 si lo logro
int Pokemon_SetNumero(Pokemon* this, int numero)
{
	int retorno;
	retorno = -1;

	if(this != NULL && numero >= 0)
	{
		this->numero = numero;
		retorno = 0;
	}


	return retorno;
}

/// @brief funcion para conseguir el numero de un pokemon
///
/// @param this puntero al pokemon
/// @param numero puntero al numero
/// @return -1 si da error 0 si lo logro
int Pokemon_GetNumero(Pokemon* this, int* numero)
{
	int retorno;
	retorno = -1;

	if(this != NULL && numero != NULL)
	{
		*numero = this->numero;
		retorno = 0;
	}


	return retorno;
}

/// @brief funcion para setear el nombre de un pokemon
///
/// @param this puntero del pokemon
/// @param nombre nombre a setear
/// @return -1 si da error 0 si lo logro
int Pokemon_SetNombre(Pokemon* this, char* nombre)
{
	int retorno;
	retorno = -1;

	if(this != NULL && nombre != NULL)
	{
		strcpy(this->nombre, nombre);
		retorno = 0;
	}
	return retorno;
}

/// @brief  funcion para conseguir el nombre de un pokemon
///
/// @param this puntero al pokemon
/// @param nombre puntero al nombre del pokemon
/// @return -1 si da error 0 si lo logro
int Pokemon_GetNombre(Pokemon* this, char* nombre)
{
	int retorno;
	retorno = -1;

	if(this != NULL && nombre != NULL)
	{
		strcpy(nombre, this->nombre);
		retorno = 0;
	}
	return retorno;
}

/// @brief funcion para setear el valor de ataque de un pokemon
///
/// @param this puntero al pokemon
/// @param valorAtaque valor a setear
/// @return -1 si da error 0 si lo logro
int Pokemon_SetValorAtaque(Pokemon* this, int valorAtaque)
{
	int retorno;
	retorno = -1;

	if(this != NULL && valorAtaque >= 0)
	{
		this->valorAtaque = valorAtaque;
		retorno = 0;
	}


	return retorno;
}

/// @brief funcion para conseguir el valor de ataque de un pokemon
///
/// @param this puntero al pokemon
/// @param valorAtaque  puntero al valor a conseguir
/// @return -1 si da error 0 si lo logro
int Pokemon_GetValorAtaque(Pokemon* this, int* valorAtaque)
{
	int retorno;
	retorno = -1;

	if(this != NULL && valorAtaque != NULL)
	{
		*valorAtaque = this->valorAtaque;
		retorno = 0;
	}


	return retorno;
}

/// @brief funcion para setear es varicolor de un pokemon
///
/// @param this puntero al pokemon
/// @param esVaricolor valor a setear
/// @return -1 si da error 0 si lo logro
int Pokemon_SetEsVaricolor(Pokemon* this, int esVaricolor)
{
	int retorno;
	retorno = -1;

	if(this != NULL && esVaricolor >= 0)
	{
		this->esVaricolor = esVaricolor;
		retorno = 0;
	}


	return retorno;
}

/// @brief funcion para conseguir el dato si un pokemon es varicolor
///
/// @param this puntero al pokemon
/// @param esVaricolor puntero al dato
/// @return -1 si da error 0 si lo logro
int Pokemon_GetEsVaricolor(Pokemon* this, int* esVaricolor)
{
	int retorno;
	retorno = -1;

	if(this != NULL && esVaricolor != NULL)
	{
		*esVaricolor = this->esVaricolor;
		retorno = 0;
	}


	return retorno;
}

/// @brief funcion para setear el tipo de un pokemon
///
/// @param this puntero al pokemon
/// @param tipo el tipo del pokemon
/// @return -1 si da error 0 si lo logro
int Pokemon_SetTipo(Pokemon* this, char* tipo)
{
	int retorno;
	retorno = -1;

	if(this != NULL && tipo != NULL)
	{
		strcpy(this->tipo, tipo);
		retorno = 0;
	}

	return retorno;
}

/// @brief funcion para conseguir el tipo de un pokemon
///
/// @param this puntero al pokemon
/// @param tipo puntero al tipo de pokemon
/// @return -1 si da error 0 si lo logro
int Pokemon_GetTipo(Pokemon* this, char* tipo)
{
	int retorno;
		retorno = -1;

		if(this != NULL && tipo != NULL)
		{
			strcpy(tipo, this->tipo);
			retorno = 0;
		}


		return retorno;
}

/// @brief funcion para setear el tamaño de um pokemon
///
/// @param this puntero al pokemon
/// @param tamanio dato del tamaño de pokemon
/// @return -1 si da error 0 si lo logro
int Pokemon_SetTamanio(Pokemon* this, char* tamanio)
{
	int retorno;
	retorno = -1;

	if(this != NULL && tamanio != NULL)
	{
		strcpy(this->tamanio, tamanio);
		retorno = 0;
	}


	return retorno;
}

/// @brief funcino para conseguir el tamaño del pokemon
///
/// @param this puntero al pokemon
/// @param tamanio puntero al tamaño del pokemon
/// @return -1 si da error 0 si lo logro
int Pokemon_GetTamanio(Pokemon* this, char* tamanio)
{
	int retorno;
		retorno = -1;

		if(this != NULL && tamanio != NULL)
		{
			strcpy(tamanio, this->tamanio);
			retorno = 0;
		}
		return retorno;
}

/// @brief funcino para setear el ataque cargado del pokemon
///
/// @param this puntero al pokemon
/// @param ataqueCargado dato del ataque cargado del pokeomon
/// @return -1 si da error 0 si lo logro
int Pokemon_SetAtaqueCargado(Pokemon* this, char* ataqueCargado)
{
	int retorno;
		retorno = -1;

		if(this != NULL && ataqueCargado != NULL)
		{
			strcpy(this->ataqueCargado, ataqueCargado);
			retorno = 0;
		}


		return retorno;
}

/// @brief funcion para conseguir el dato del ataque cargado del pokemon
///
/// @param this puntero al pokemon
/// @param ataqueCargado puntero al dato del ataque cargado
/// @return -1 si da error 0 si lo logro
int Pokemon_GetAtaqueCargado(Pokemon* this, char* ataqueCargado)
{
	int retorno;
		retorno = -1;

		if(this != NULL && ataqueCargado != NULL)
		{
			strcpy(ataqueCargado, this->ataqueCargado);
			retorno = 0;
		}
		return retorno;
}

/// @brief funcion que engloba todos los setters
///
/// @param this
/// @param numero
/// @param nombre
/// @param tipo
/// @param tamanio
/// @param ataqueCargado
/// @param valorAtaque
/// @param esVaricolor
/// @return -1 si da error 0 si lo logro
int Pokemon_SetAll(Pokemon* this, int numero, char* nombre, char* tipo, char* tamanio, char* ataqueCargado, int valorAtaque, int esVaricolor)
{
	int retorno = -1;

	if(this != NULL && !Pokemon_SetNumero(this, numero) && !Pokemon_SetNombre(this, nombre) && !Pokemon_SetTipo(this, tipo)
			&& !Pokemon_SetTamanio(this, tamanio) && !Pokemon_SetAtaqueCargado(this, ataqueCargado)
			&& !Pokemon_SetValorAtaque(this, valorAtaque) && !Pokemon_SetEsVaricolor(this, esVaricolor))
	{
		retorno = 0;
	}

	return retorno;
}

/// @brief funcion que engloba todos los getters
///
/// @param this
/// @param numero
/// @param nombre
/// @param tipo
/// @param tamanio
/// @param ataqueCargado
/// @param valorAtaque
/// @param esVaricolor
/// @return -1 si da error 0 si lo logro
int Pokemon_GetAll(Pokemon* this, int* numero, char* nombre, char* tipo, char* tamanio, char* ataqueCargado, int* valorAtaque, int* esVaricolor)
{
	int retorno = -1;

	if(this != NULL && !Pokemon_GetNumero(this, numero) && !Pokemon_GetNombre(this, nombre) && !Pokemon_GetTipo(this, tipo)
			&& !Pokemon_GetTamanio(this, tamanio) && !Pokemon_GetAtaqueCargado(this, ataqueCargado)
			&& !Pokemon_GetValorAtaque(this, valorAtaque) && !Pokemon_GetEsVaricolor(this, esVaricolor))
	{
		retorno = 0;
	}

	return retorno;
}

/// @brief Muestra un pokemon
///
/// @param this Puntero al pokemon a mostrar
void Pokemon_PrintUnPokemon(Pokemon* this)
{
	int auxNumero;
	char auxNombre[50];
	char auxTipo[50];
	char auxTamanio[50];
	char auxAtaqueCargado[50];
	int auxValorAtaque;
	int auxEsVaricolor;

	if(!Pokemon_GetAll(this, &auxNumero, auxNombre, auxTipo, auxTamanio, auxAtaqueCargado, &auxValorAtaque, &auxEsVaricolor))
	{
		printf("%d\t|%s\t\t|%s\t|%s\t|%s\t|%d\t\t|%d\n", auxNumero, auxNombre, auxTipo, auxTamanio, auxAtaqueCargado, auxValorAtaque, auxEsVaricolor);
	}

}

/// @brief  funcion para encontrar un Pokemon por ID
///
/// @param pArrayaPokemon listado de Pokemons
/// @param id del Pokemon a encontrar
/// @return -1 si no lo encontro o el index del Pokemon buscado
int Pokemon_FindById(LinkedList* pArrayaPokemon, int numero)
{
	Pokemon* pPokemon;
	int retorno;
	int len;
	int numeroAux;

	retorno = -1;
	len = ll_len(pArrayaPokemon);

	for(int i = 0; i < len; i++)
	{
		pPokemon = (Pokemon*)ll_get(pArrayaPokemon, i);
		if(!Pokemon_GetNumero(pPokemon, &numeroAux) && numeroAux == numero)
		{
			retorno = i;
			break;
		}
	}

	return retorno;
}

/// @brief funcion para filtrar pokemones segun su tipo y esVaricolor
///
/// @param this puntero al dato a filtrar
/// @return 0 si no cumple el filtro 1 si lo cumple
int Pokemon_AguaVariColor(void* this)
{
	int retorno = 0;
	char auxTipo[50];
	int auxEsVaricolor;
	Pokemon* pPokemon;

	pPokemon = (Pokemon*)this;
	Pokemon_GetTipo(pPokemon, auxTipo);
	Pokemon_GetEsVaricolor(pPokemon, &auxEsVaricolor);

	if(strcmp(auxTipo, "Water") == 0 && auxEsVaricolor == 1)
	{
		retorno = 1;
	}

	return retorno;
}

/// @brief funcino para modificar el valor de ataque de un pokemon si pasa el criterio
///
/// @param this puntero al dato de modificar
void Pokemon_MapearAtaqueCargado(void* this)
{
	Pokemon* pPokemon;
	char auxTipo[50];
	int auxValorAtaque;

	pPokemon = (Pokemon*) this;
	Pokemon_GetTipo(pPokemon, auxTipo);

	if(strcmp(auxTipo, "Fire") == 0 || strcmp(auxTipo, "Ground") == 0 || strcmp(auxTipo, "Grass") == 0)
	{
		Pokemon_GetValorAtaque(pPokemon, &auxValorAtaque);
		auxValorAtaque = auxValorAtaque + (auxValorAtaque * 0.1);
		Pokemon_SetValorAtaque(pPokemon, auxValorAtaque);
	}
}

/// @brief funcion para contar los pokemons que cumplen el criterio del filtro
///
/// @param this puntero al dato a evaluar
/// @return 0 si no cumple el filtro 1 si lo cumple
int Pokemon_CountBatalla(void* this)
{
	int retorno = 0;
	Pokemon* pPokemon;
	char auxTipo[50];
	char auxTamanio[50];
	char auxAtaqueCargado[50];
	int auxValorAtaque;


	pPokemon = (Pokemon*) this;
	Pokemon_GetTipo(pPokemon, auxTipo);
	Pokemon_GetTamanio(pPokemon, auxTamanio);
	Pokemon_GetAtaqueCargado(pPokemon, auxAtaqueCargado);
	Pokemon_GetValorAtaque(pPokemon, &auxValorAtaque);

	if((strcmp(auxTipo, "Fire") == 0 && strcmp(auxTamanio, "XL") && strcmp(auxAtaqueCargado, "Lanzallamas") && auxValorAtaque >= 80)
			|| (strcmp(auxTipo, "Water") == 0 && strcmp(auxTamanio, "L") && strcmp(auxAtaqueCargado, "Hidrobomba") && auxValorAtaque >= 80))
	{
		retorno = 1;
	}

	return retorno;
}

