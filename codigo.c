#include <stdio.h>

int sumNrsPares(int inicio, int fim) {
    int soma = 0;
    
    if (inicio % 2 != 0) {
        inicio++; // Pula para o próximo número par
    }

    while (inicio <= fim) {
        soma += inicio;
        inicio += 2; // Próximo número par
    }

    return soma;
}

int main() {
    int inicio, fim;
    printf("Digite o valor inicial e final do intervalo: ");
    scanf("%d %d", &inicio, &fim);

    int resultado = sumNrsPares(inicio, fim);
    printf("A soma dos números pares no intervalo é: %d\n", resultado);

    return 0;
}

