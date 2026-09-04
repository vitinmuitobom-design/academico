#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char operacao[20];
    double a, b, c;
    double peso, altura;
    double base, lado, raio;
    char figura[20];

    printf("Escolha uma das 20 operacoes:\n");
    printf("+  -  *  /  %%  ^  >  <  >=  <=  ==  !=\n");
    printf("media  max  min  dist  somaquad  mediaquad  imc  area\n");

    scanf("%19s", operacao);

    /*
       Operacoes que utilizam a e b
    */
    if (strcmp(operacao, "+") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        c = a + b;
        printf("Resultado: %.2lf\n", c);

    } else if (strcmp(operacao, "-") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        c = a - b;
        printf("Resultado: %.2lf\n", c);

    } else if (strcmp(operacao, "*") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        c = a * b;
        printf("Resultado: %.2lf\n", c);

    } else if (strcmp(operacao, "/") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        if (b != 0) {
            c = a / b;
            printf("Resultado: %.2lf\n", c);
        } else {
            printf("Erro: divisao por zero.\n");
        }

    } else if (strcmp(operacao, "%") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        if (b != 0) {
            c = fmod(a, b);
            printf("Resultado: %.2lf\n", c);
        } else {
            printf("Erro: modulo por zero.\n");
        }

    } else if (strcmp(operacao, "^") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        c = pow(a, b);
        printf("Resultado: %.2lf\n", c);

    } else if (strcmp(operacao, ">") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        if (a > b) {
            printf("Resultado: a e maior\n");
        } else {
            printf("Resultado: b e maior ou igual\n");
        }

    } else if (strcmp(operacao, "<") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        if (a < b) {
            printf("Resultado: a e menor\n");
        } else {
            printf("Resultado: b e menor ou igual\n");
        }

    } else if (strcmp(operacao, ">=") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        if (a >= b) {
            printf("Resultado: a e maior ou igual a b\n");
        } else {
            printf("Resultado: a e menor que b\n");
        }

    } else if (strcmp(operacao, "<=") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        if (a <= b) {
            printf("Resultado: a e menor ou igual a b\n");
        } else {
            printf("Resultado: a e maior que b\n");
        }

    } else if (strcmp(operacao, "==") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        if (a == b) {
            printf("Resultado: a e igual a b\n");
        } else {
            printf("Resultado: a e diferente de b\n");
        }

    } else if (strcmp(operacao, "!=") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        if (a != b) {
            printf("Resultado: a e diferente de b\n");
        } else {
            printf("Resultado: a e igual a b\n");
        }

    } else if (strcmp(operacao, "media") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        c = (a + b) / 2;
        printf("Media: %.2lf\n", c);

    } else if (strcmp(operacao, "max") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        if (a > b) {
            c = a;
        } else {
            c = b;
        }

        printf("Maior valor: %.2lf\n", c);

    } else if (strcmp(operacao, "min") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        if (a < b) {
            c = a;
        } else {
            c = b;
        }

        printf("Menor valor: %.2lf\n", c);

    } else if (strcmp(operacao, "dist") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        if (a >= b) {
            c = a - b;
        } else {
            c = b - a;
        }

        printf("Distancia absoluta: %.2lf\n", c);

    } else if (strcmp(operacao, "somaquad") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        c = a * a + b * b;
        printf("Soma dos quadrados: %.2lf\n", c);

    } else if (strcmp(operacao, "mediaquad") == 0) {
        printf("Digite a: ");
        scanf("%lf", &a);

        printf("Digite b: ");
        scanf("%lf", &b);

        c = (a * a + b * b) / 2;
        printf("Media dos quadrados: %.2lf\n", c);

    /*
       NOVA OPERACAO: IMC
    */
    } else if (strcmp(operacao, "imc") == 0) {

        printf("Digite o peso em kg: ");
        scanf("%lf", &peso);

        printf("Digite a altura em metros: ");
        scanf("%lf", &altura);

        if (altura > 0) {
            c = peso / (altura * altura);

            printf("IMC: %.2lf\n", c);

            if (c < 18.5) {
                printf("Classificacao: abaixo do peso\n");
            } else if (c < 25) {
                printf("Classificacao: peso normal\n");
            } else if (c < 30) {
                printf("Classificacao: sobrepeso\n");
            } else {
                printf("Classificacao: obesidade\n");
            }

        } else {
            printf("Erro: altura invalida.\n");
        }

    /*
       NOVA OPERACAO: AREA
    */
    } else if (strcmp(operacao, "area") == 0) {

        printf("Escolha a figura geometrica:\n");
        printf("circulo\n");
        printf("quadrado\n");
        printf("retangulo\n");
        printf("triangulo\n");

        scanf("%19s", figura);

        if (strcmp(figura, "circulo") == 0) {

            printf("Digite o raio: ");
            scanf("%lf", &raio);

            if (raio >= 0) {
                c = M_PI * raio * raio;
                printf("Area do circulo: %.2lf\n", c);
            } else {
                printf("Erro: raio invalido.\n");
            }

        } else if (strcmp(figura, "quadrado") == 0) {

            printf("Digite o lado: ");
            scanf("%lf", &lado);

            if (lado >= 0) {
                c = lado * lado;
                printf("Area do quadrado: %.2lf\n", c);
            } else {
                printf("Erro: lado invalido.\n");
            }

        } else if (strcmp(figura, "retangulo") == 0) {

            printf("Digite a base: ");
            scanf("%lf", &base);

            printf("Digite a altura: ");
            scanf("%lf", &altura);

            if (base >= 0 && altura >= 0) {
                c = base * altura;
                printf("Area do retangulo: %.2lf\n", c);
            } else {
                printf("Erro: valores invalidos.\n");
            }

        } else if (strcmp(figura, "triangulo") == 0) {

            printf("Digite a base: ");
            scanf("%lf", &base);

            printf("Digite a altura: ");
            scanf("%lf", &altura);

            if (base >= 0 && altura >= 0) {
                c = (base * altura) / 2;
                printf("Area do triangulo: %.2lf\n", c);
            } else {
                printf("Erro: valores invalidos.\n");
            }

        } else {
            printf("Figura invalida.\n");
        }

    } else {
        printf("Operacao invalida.\n");
    }

    return 0;
}
