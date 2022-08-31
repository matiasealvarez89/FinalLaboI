#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "pedidoDatos.h"
#include "Controller.h"

int main(void) {
	setbuf(stdout, NULL);

	LinkedList* listaPokemon;
	listaPokemon = ll_newLinkedList();
	int cantidad;
	int opcion;
	int flagCarga = 0;

	do
	{
		printf("\n1. Cargar archivos de Pokemon\n"
				"2. Eleminar Pokemon\n"
				"3. Imprmier Pokemones\n"
				"4. Filtrar de tipo Aguar Varicolor\n"
				"5. Mapear Ataque Cargado\n"
				"6. Batalla Pokemon\n"
				"10. Salir\n");

		if(!getNumero(&opcion, "Ingrese la opcion deseada\n", "Ingreso incorrecto\n", 1, 10, 5))
		{
			switch(opcion)
			{
				case 1:
					if(!Controller_loadFromText("DATA_POKEMONES.csv", listaPokemon))
					{
						flagCarga = 1;
					}
					break;
				case 2:
					if(flagCarga == 1)
					{
						Controller_removePokemon(listaPokemon);
					}
					else
					{
						printf("Todavia no se cargo el archivo\n");
					}
					break;
				case 3:
					if(flagCarga == 1)
					{
						Controller_ListPokemon(listaPokemon);
					}
					else
					{
						printf("Todavia no se cargo el archivo\n");
					}
					break;
				case 4:
					if(flagCarga == 1)
					{
						Controller_AguaVaricolor(listaPokemon);
					}
					else
					{
						printf("Todavia no se cargo el archivo\n");
					}
					break;
				case 5:
					if(flagCarga == 1)
					{
						Controller_MapearAtaqueCargado(listaPokemon);
					}
					else
					{
						printf("Todavia no se cargo el archivo\n");
					}
					break;
				case 6:
					if(flagCarga == 1)
					{
						cantidad = Controller_CountBatalla(listaPokemon);
						if(cantidad >= 3)
						{
							printf("Hay %d Pokemones que cumplen los requisitos, Batalla Ganada!!!\n", cantidad);
						}
						else
						{
							printf("Hay solo %d Pokemones que cumplen los requisitos, Batalla Perdida...\n",cantidad);
						}
					}
					else
					{
						printf("Todavia no se cargo el archivo\n");
					}
					break;
				case 10:
					printf("Saliendo\n");
					break;
			}
		}


	}while(opcion != 10);



	return EXIT_SUCCESS;
}
