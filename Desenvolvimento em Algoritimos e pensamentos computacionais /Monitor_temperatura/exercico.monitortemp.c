#include <stdio.h>

int main(){
    float temperatura;

    printf("Iniciando monitoramento de temperatura..\n");
    printf("Digite a temperatura ");
    scanf("%f", &temperatura);

    while (temperatura < 80) {
        printf("Temperatura atual: %.1f (C)" , temperatura);
        printf("Digite a temperatura (C) : ");
        scanf("%f", temperatura);
    }

printf("\nAlerta: Temperatura acima do limite!");
return 0;
}
  