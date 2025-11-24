#include <stdio.h>

float calcularMedia(float vetor[], int tamanho) {
    float soma = 0;
    int i;
    for(i = 0; i < tamanho; i++) {
        soma = soma + vetor[i];
    }
    return soma / tamanho;
}

float encontrarMaior(float vetor[], int tamanho) {
    float maior = vetor[0];
    int i;
    for(i = 0; i < tamanho; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

float encontrarMenor(float vetor[], int tamanho) {
    float menor = vetor[0];
    int i;
    for(i = 0; i < tamanho; i++) {
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}

int main() {
    float notas[5];
    int i;
    int opcao;
    float resultado;

    // Entrada de Dados
    for(i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Menu de Opcoes
    do {
        printf("\n--- MENU ESTATISTICO ---\n");
        printf("1. Calcular Media\n");
        printf("2. Ver Maior Nota\n");
        printf("3. Ver Menor Nota\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                resultado = calcularMedia(notas, 5);
                printf("A media e: %.2f\n", resultado);
                break;
            case 2:
                resultado = encontrarMaior(notas, 5);
                printf("A maior nota e: %.2f\n", resultado);
                break;
            case 3:
                resultado = encontrarMenor(notas, 5);
                printf("A menor nota e: %.2f\n", resultado);
                break;
            case 4:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 4);

    return 0;
}