#include <stdio.h>
#include "bilhete.h"

int main() {
    int idade, quantidade;

    printf("Informe a idade do visitante: ");
    scanf("%d", &idade);
    printf("Informe a quantidade de bilhetes (máximo 5): ");
    scanf("%d", &quantidade);

    float total = calcular_total(idade, quantidade);

    if (total == -1) {
        printf("Erro: Quantidade de bilhetes inválida (mínimo 1, máximo 5).\n");
    } else {
        printf("Preço total: R$ %.2f\n", total);
    }

    return 0;
}
