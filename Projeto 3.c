#include <stdio.h>

int main() {
    float nota;
    int opcao;

    do {
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);

        printf("Nota registrada: %.2f\n", nota);

        printf("Deseja inserir outra nota? (1-Sim / 2-Nao): ");
        scanf("%d", &opcao);

    } while (opcao == 1);

    return 0;
}