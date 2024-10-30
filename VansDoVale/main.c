#include <stdio.h>
#include <stdlib.h>
#include "cadastro.h"



int main(int argc, char *argv[]) {
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
