#include <stdio.h>
#include <math.h>

int main () {
    int opcao;
    float temp , resultado;


printf("--Converso-- \n");
printf("1. Celsius para Fahrenheit\n");
printf("2. Celsius para Kelvin\n");
printf("3. Fharenheit para Celsius\n");
printf("4 Fharnheit para Kelvin\n");
printf("5. Kelvin para Celsius\n");
printf("6. Kelvin para Fahrenheit\n");
printf("Escolha uma opcao (1-6)\n");


scanf("%d", &opcao);

if ( opcao >= 1 && opcao <= 6){
    printf("Escreva a temperatura a ser convertida:  ");
    scanf( "%f", &temp);
} else{
    printf("Opcao invalida! \n");
    return 0;
}

switch (opcao){
    case 1: // C para F
       resultado = (temp * 1.8) + 32;
       printf("Conversao :  %.2f  *C\n", resultado);
       break;

    case 2: // C para K
      resultado = (temp + 273.15);
      printf("Convresao: %.2f *C\n", resultado);
      break;

    case 3: // F para C
      resultado = (temp - 32) / 1.8;
      printf("Convresao: %.2f *f\n", resultado);
      break;
    
    case 4: // F para K
      resultado = ((temp - 32 ) / 1.8 ) + 273.15;
      printf("Conversao: %.2f *f\n", resultado);
      break;
    
    case 5: // K para C
      resultado = (temp - 273.15 );
      printf("Conversao: %.2f *k\n", resultado);
      break;
    
    case 6: // K para F
      resultado = ((temp - 273.15) * 1.8) + 32;
      printf("Convresao: %.2f *k\n", resultado);
      break;
 }


return 0;


}
