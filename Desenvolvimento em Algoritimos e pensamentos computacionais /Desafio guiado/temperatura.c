#include <stdio.h>

int main() {
    float limite;
    float temperatura;
    float soma = 0;
    float maior = 0;
    float menor = 0;
    float media;
    float percentual;

    int quantidade = 0;
    int acimaLimite = 0;
    int consecutivas = 0;

    // Solicita o limite de temperatura
    do {
        printf("Digite o limite de temperatura (0 a 100 C): ");
        scanf("%f", &limite);

        if (limite < 0 || limite > 100) {
            printf("Limite invalido! Digite um valor entre 0 e 100.\n");
        }

    } while (limite < 0 || limite > 100);

    printf("\n=== MONITORAMENTO DE TEMPERATURA ===\n");
    printf("Digite -1 para encerrar manualmente.\n\n");

    // Realiza as leituras das temperaturas
    while (consecutivas < 3) {

        printf("Digite a temperatura: ");
        scanf("%f", &temperatura);

        // Verifica se o usuario deseja encerrar
        if (temperatura == -1) {
            break;
        }

        // Valida a temperatura informada
        if (temperatura < 0 || temperatura > 100) {
            printf("Temperatura invalida! Digite um valor entre 0 e 100.\n");
            continue;
        }

        // Primeira temperatura valida
        if (quantidade == 0) {
            maior = temperatura;
            menor = temperatura;
        }

        // Atualiza maior e menor temperatura
        if (temperatura > maior) {
            maior = temperatura;
        }

        if (temperatura < menor) {
            menor = temperatura;
        }

        // Soma as temperaturas para calcular a media
        soma += temperatura;
        quantidade++;

        // Verifica se a temperatura esta acima do limite
        if (temperatura > limite) {
            acimaLimite++;
            consecutivas++;

            printf("Temperatura acima do limite!\n");
            printf("Consecutivas acima do limite: %d\n", consecutivas);

        } else {
            // Reinicia a contagem quando a temperatura
            // nao estiver acima do limite
            consecutivas = 0;

            printf("Temperatura dentro do limite.\n");
        }

        // Verifica se ocorreram 3 temperaturas consecutivas
        if (consecutivas == 3) {
            printf("\nALERTA: 3 temperaturas consecutivas acima do limite!\n");
            printf("Monitoramento encerrado automaticamente.\n");
        }

        printf("\n");
    }

    // Exibe o relatorio somente se houver temperaturas validas
    if (quantidade > 0) {
        media = soma / quantidade;
        percentual = ((float)acimaLimite / quantidade) * 100;

        printf("\n========== RELATORIO FINAL ==========\n");
        printf("Quantidade de temperaturas: %d\n", quantidade);
        printf("Media das temperaturas: %.2f C\n", media);
        printf("Maior temperatura: %.2f C\n", maior);
        printf("Menor temperatura: %.2f C\n", menor);
        printf("Temperaturas acima do limite: %d\n", acimaLimite);
        printf("Percentual acima do limite: %.2f%%\n", percentual);
        printf("=====================================\n");
    } else {
        printf("\nNenhuma temperatura valida foi registrada.\n");
    }

    return 0;
}