#include <stdio.h>

int main() {
  int idade = 20;
  char* resultado;

  resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";  //É um IF escrito de forma compacta. Fico mais bonito, porém só é possível executar apena 1 comando em If e 1 em Else

  printf("Resultado: %s\n", resultado);

  return 0;
}