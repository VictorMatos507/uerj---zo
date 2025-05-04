#include "bilhete.h"

float calcular_preco(int idade) {
    if (idade <= 12)
        return 10.0;
    else if (idade >= 60)
        return 15.0;
    else
        return 30.0;
}

float calcular_total(int idade, int quantidade) {
    if (quantidade < 1 || quantidade > 5) {
        return -1;
    }
    return calcular_preco(idade) * quantidade;
}
