#ifndef _CADASTRO_H_
#define _CADASTRO_H_
#include <stdio.h>

typedef struct{
	char nome[51],endereco[51],rg[20];
}PASSAGEIRO;

PASSAGEIRO cadastro_pas();

void grava_pas(PASSAGEIRO,FILE *file);


#endif
