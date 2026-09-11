#include <stdio.h>
#include <string.h>

int main(){
    char senha[50];
    const char senha_correta[] = "67";
    
    printf("Digite sua senha: ");
    scanf("%s", senha);
    
    while (strcmp(senha , senha_correta) != 0){
        printf("Senha incorreta! Tente novamente: ");
        scanf("%s", senha);
        
    }
    printf("Acesso liberado !\n");
    return 0;
}