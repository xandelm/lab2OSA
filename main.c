#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOME_SIZE 19
#define REGISTRO_SIZE 29;

typedef struct Registro {
  char nome[NOME_SIZE];
  char separador;
  char telefone[9];
} Registro;




int main(int argc, char *argv[]) {
  FILE *pointerArqEntrada, *pointerArqSaida;
  int bufferSize;
  char *nomeArqSaida;
  nomeArqSaida = strcat(argv[2], ".ordenado");
  bufferSize = atoi(argv[1]);
  pointerArqEntrada = fopen(argv[2],"rb");
  if(pointerArqEntrada == NULL) {
    printf("Arquivo não abriu\n");
    exit(1);
  }
  Registro registro1;
  fread(registro1.nome, sizeof(char), NOME_SIZE * sizeof(char), pointerArqEntrada);
  printf("%s\n",registro1.nome);

  
  return 0;
}