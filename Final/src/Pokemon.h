#ifndef Pokemon_H_
#define Pokemon_H_

typedef struct
{
	int numero;
	char nombre[50];
	char tipo[50];
	char tamanio[50];
	char ataqueCargado[50];//
	int valorAtaque;
	int esVaricolor;
}Pokemon;

#endif /* Pokemon_H_ */

Pokemon* Pokemon_New();
Pokemon* Pokemon_NewParametros(char* numeroStr, char* nombreStr, char* tipoStr, char* tamanioStr, char* ataqueCargadoStr, char* valorAtaqueStr, char* esVaricolorStr);
void Pokemon_delete(Pokemon* this);
int Pokemon_SetNumero(Pokemon* this, int numero);
int Pokemon_GetNumero(Pokemon* this, int* numero);
int Pokemon_SetNombre(Pokemon* this, char* nombre);
int Pokemon_GetNombre(Pokemon* this, char* nombre);
int Pokemon_SetValorAtaque(Pokemon* this, int valorAtaque);
int Pokemon_GetValorAtaque(Pokemon* this, int* valorAtaque);
int Pokemon_SetEsVaricolor(Pokemon* this, int esVaricolor);
int Pokemon_GetEsVaricolor(Pokemon* this, int* esVaricolor);
int Pokemon_SetTipo(Pokemon* this, char* tipo);
int Pokemon_GetTipo(Pokemon* this, char* tipo);
int Pokemon_SetTamanio(Pokemon* this, char* tamanio);
int Pokemon_GetTamanio(Pokemon* this, char* tamanio);
int Pokemon_SetAtaqueCargado(Pokemon* this, char* ataqueCargado);
int Pokemon_GetAtaqueCargado(Pokemon* this, char* ataqueCargado);
int Pokemon_SetAll(Pokemon* this, int numero, char* nombre, char* tipo, char* tamanio, char* ataqueCargado, int valorAtaque, int esVaricolor);
int Pokemon_GetAll(Pokemon* this, int* numero, char* nombre, char* tipo, char* tamanio, char* ataqueCargado, int* valorAtaque, int* esVaricolor);
void Pokemon_PrintUnPokemon(Pokemon* this);
int Pokemon_FindById(LinkedList* pArrayaPokemon, int numero);
int Pokemon_AguaVariColor(void* this);
void Pokemon_MapearAtaqueCargado(void* this);
int Pokemon_CountBatalla(void* this);








