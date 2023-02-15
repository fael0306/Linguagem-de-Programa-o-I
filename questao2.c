#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// Quest�o 2 da lista

int main(int argc, char * argv[]) {

  setlocale(LC_ALL, "portuguese");

  int n, c = 2, aux = 0, resto;

  printf("Digite um n�mero: ");
  scanf("%d", & n);

  while (c <= sqrt(n) && aux == 0) {
    resto = n % c;
    if (resto == 0) {
      aux = 1;
    }
    c++;
  }

  if (aux == 1) {
    printf("\n\nN�o � primo");
  } else {
    printf("\n\n� primo");
  }

  getch();
  return 0;
}
