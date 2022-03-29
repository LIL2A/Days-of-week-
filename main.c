#include <stdio.h>
#define COD_SEGUNDA 1 
#define COD_TERCA 2
#define COD_QUARTA 3 
#define COD_QUINTA 4
#define COD_SEXTA 5
#define COD_SABADO 6
#define COD_DOMINGO 7 
int main(void) {

  //Declaração de variáveis 
  int dias;

  printf("Inserir valor entre 1 e 7 = ");
  scanf("%i",&dias);
  
  if (dias==COD_SEGUNDA) 
    printf("Segunda");
  else if (dias==COD_TERCA)
    printf("Terca");
  else if(dias==COD_QUARTA)
    printf("Quarta");
  else if (dias==COD_QUINTA)
    printf("Quinta");
  else if (dias==COD_SEXTA)
    printf("Sexta");
  else if (dias==COD_SABADO)
    printf("Sabado");
  else if (dias==COD_DOMINGO)
    printf("Domingo");
  else 
    printf("Valor invalido");
  
  
  return 0;
}