#include <stdio.h>
#include "cadastro.h"

printf("ola");
//linha
PASSAGEIRO cadastro_pas(){
	PASSAGEIRO a;
	printf("Nome: ");
	fgets(a.nome,50,stdin);
	printf("RG: ");
	fgets(a.rg,20,stdin);
	printf("Endereco: ");
	fgets(a.endereco,50,stdin);
	return a;
}

void grava_pas(PASSAGEIRO b, FILE *file){
	fprintf(file,b.nome);
	fprintf(file,b.endereco);
	fprintf(file,b.rg);
	}
