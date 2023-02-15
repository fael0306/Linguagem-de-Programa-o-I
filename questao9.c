#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Quest�o 9 da lista

int main(int argc, char * argv[]) {

  setlocale(LC_ALL, "portuguese");

  char p[80];
  int cont = 0, t, i, j;

  printf("Digite uma palavra: ");
  scanf("%s", p); // n�o � necess�rio utilizar & em p, pois � um array

  t = strlen(p);

  for (i = 0; i < t; i++) {
    // percorre a string a partir da posi��o atual
    for (j = i + 1; j < t; j++) {
      if (p[i] == p[j]) {
        t--;
        // move todos os elementos uma posi��o para tr�s, 
        // removendo o caractere repetido na posi��o atual
        for (int k = j; k < t; k++) {
          p[k] = p[k + 1];
        }
        j--; // decrementa j para voltar a analisar a mesma posi��o
      }
    }
  }

  printf("O n�mero de caracteres distintos �: %d", t);

  getch();
  return 0;
}
