#include <stdio.h>
#include "minunit.h"
#include "bilhete.h"

int tests_run = 0;

static char* test_preco_crianca() {
    MU_ASSERT("Erro: Criança", calcular_preco(10) == 10.0);
    return 0;
}

static char* test_preco_adulto() {
    MU_ASSERT("Erro: Adulto", calcular_preco(25) == 30.0);
    return 0;
}

static char* test_preco_idoso() {
    MU_ASSERT("Erro: Idoso", calcular_preco(65) == 15.0);
    return 0;
}

static char* test_quantidade_invalida() {
    MU_ASSERT("Erro: Quantidade > 5", calcular_total(30, 6) == -1.0);
    return 0;
}

static char* test_preco_total() {
    MU_ASSERT("Erro: Total", calcular_total(60, 2) == 30.0);
    return 0;
}

static char* all_tests() {
    MU_RUN_TEST(test_preco_crianca);
    MU_RUN_TEST(test_preco_adulto);
    MU_RUN_TEST(test_preco_idoso);
    MU_RUN_TEST(test_quantidade_invalida);
    MU_RUN_TEST(test_preco_total);
    return 0;
}

int main() {
    char *result = all_tests();
    if (result != 0) {
        printf("%s\n", result);
    } else {
        printf("TODOS OS TESTES PASSARAM\n");
    }
    printf("Testes executados: %d\n", tests_run);
    return result != 0;
}
