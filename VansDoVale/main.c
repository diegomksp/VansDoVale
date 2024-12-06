#include <stdio.h>
#include <stdlib.h>
#include "cadastro.h"



int main(int argc, char *argv[]) {
	printf("Entrando com uma nova funcionalidade nesse codigo. Essa parte é somente para treinamento de versionamento de código.\n");
	printf("Esse testo foi em uma nova branch.\n");
	PASSAGEIRO b;
	FILE *file;
	
	file = fopen("CadastroPassageiros.txt","a");
	if(file ==NULL){
		file = fopen("CadastroPassageiros.txt","w");
	}
	b=cadastro_pas();
	grava_pas(b, file);
	//fclose(file);
	return 0;
}
