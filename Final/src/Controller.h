int Controller_loadFromText(char* path , LinkedList* pArrayListPokemon);
int Controller_loadFromBinary(char* path , LinkedList* pArrayListPokemon);
int Controller_addPokemon(LinkedList* pArrayListPokemon);
int Controller_editPokemon(LinkedList* pArrayListPokemon);
int Controller_removePokemon(LinkedList* pArrayListPokemon);
int Controller_ListPokemon(LinkedList* pArrayListPokemon);
int Controller_sortPokemon(LinkedList* pArrayListPokemon);
int Controller_SaveAsText(char* path , LinkedList* pArrayListPokemon);
int Controller_SaveAsBinary(char* path , LinkedList* pArrayListPokemon);
int Controller_idMax(char* path);
int Controller_idMaxGuardar(char* path, int idNuevo);
void Controller_AguaVaricolor(LinkedList* pArrayListPokemon);
void Controller_MapearAtaqueCargado(LinkedList* pArrayListPokemon);
int Controller_CountBatalla(LinkedList* pArrayListPokemon);

