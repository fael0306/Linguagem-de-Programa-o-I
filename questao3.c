#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Quest�o 3 da lista de exerc�cios

int main(int argc, char * argv[]) {

  setlocale(LC_ALL, "portuguese");

  int n, sdiv = 0, cont = 1;

  printf("Digite um n�mero: ");
  scanf("%d", & n);

  while (cont < n) {
    if (n % cont == 0) {
      sdiv = sdiv + cont;
    }
    cont = cont + 1;
  }

  if (sdiv == n) {
    printf("\nO n�mero %d � perfeito", n);
  } else {
    printf("\nO n�mero %d n�o � perfeito", n);
  }

  getch();
  return 0;
}
