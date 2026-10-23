#include <stdio.h>

int main() {
    
    char Palavra[99]; 

    printf("Digite a sua palavra a ser ofuscada: ");
    fgets(Palavra, 99, stdin); 

    printf("A palavra a ser ofuscada foi: %s", Palavra);
    
    for(int i = 0; Palavra [i] != '\0'; i++) {
        Palavra[i] += 3;
        printf("ofuscando: %c\n", Palavra[i]);
    }
    
    printf("palavra encriptada: %s", Palavra);
    
    return 0;
}
