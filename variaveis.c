#include <stdio.h>

int main(void) {
  char nome[20];
  int idade[10];
  char curso[30];
  int matricula[10];
  char endereco[50];
  char periodo[20];
  char disciplinas[10];
  float mensalidade;
  
  printf("Digite seu nome: ");
  fgets(nome,20,stdin);

  printf("Digite sua idade: ");
  fgets(idade,10,stdin);
  
  printf("Digite seu curso: ");
  fgets(curso,'MAX',stdin);

  printf("Digite sua matricula: ");
  fgets(matricula,10,stdin);

  printf("Digite seu endereco: ");
  fgets(endereco,50,stdin);

  printf("Digite seu periodo: ");
  fgets(periodo,50,stdin);

  printf("Digite quantas disciplinas: ");
  fgets(disciplinas,10,stdin);

  printf("Digite sua mensalidade: ");
  scanf("%f",&mensalidade);

  printf("\n-----------------------------------\n");
  printf("\nLista das Informações cadastradas\n\n");
  printf("-------------------------------------\n");
  printf("Nome: %s",nome);
  printf("Idade: %s",idade);
  printf("Curso: %s",curso);
  printf("Matricula: %s",matricula);
  printf("Endereco: %s",endereco);
  printf("Periodo: %s",periodo);
  printf("Disciplinas: %s",disciplinas);
  printf("Mensalidade: %9.2f",mensalidade);
  printf("\n------------------------------------\n");
}
