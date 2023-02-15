#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

// Quest�o 6 da lista

#define DECIMAL_PLACES 2

int main(int argc, char * argv[]) {

  setlocale(LC_ALL, "portuguese");

  int num_abastecimentos, i;
  float distancia, quantidade_gasolina, preco, km_por_litro, distancia_total = 0, quantidade_total = 0, custo_total = 0, custo_por_km;

  printf("Digite o n�mero de abastecimentos feitos (incluindo o primeiro e o �ltimo): ");
  scanf(" %d", & num_abastecimentos);

  for (i = 1; i <= num_abastecimentos; i++) {
    printf("\n\nDist�ncia percorrida at� a %d� parada: ", i);
    scanf(" %f", & distancia);

    if (distancia <= 0) {
      printf("Valor inv�lido para dist�ncia.\n");
      return 1;
    }

    printf("Quantidade de gasolina comprada na parada %d (em litros): ", i);
    scanf(" %f", & quantidade_gasolina);

    if (quantidade_gasolina <= 0) {
      printf("Valor inv�lido para quantidade de gasolina.\n");
      return 1;
    }

    printf("Pre�o pago pela gasolina: ");
    scanf(" %f", & preco);

    if (preco <= 0) {
      printf("Valor inv�lido para pre�o.\n");
      return 1;
    }

    km_por_litro = distancia / quantidade_gasolina;
    printf("Km/L na parada %d = %.*f\n", i, DECIMAL_PLACES, km_por_litro);

    distancia_total += distancia;
    quantidade_total += quantidade_gasolina;
    custo_total += preco * quantidade_gasolina;
  }

  custo_por_km = custo_total / distancia_total;

  printf("\n\nKm/L durante toda a viagem �: %.*f", DECIMAL_PLACES, distancia_total / quantidade_total);
  printf("\nO custo do combust�vel por km rodado �: %.*f", DECIMAL_PLACES, custo_por_km);

  getch();
  return 0;
}
