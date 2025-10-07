#include <stdio.h>
#include "espirais.h"

int main() {
    int n;
    printf("Digite o valor de n: ");
    
    if (scanf("%d", &n) != 1) {
        printf("Erro na leitura do valor de n\n");
        return 1;
    }
    
    if (n < 0) {
        printf("O valor de n deve ser >= 0\n");
        return 1;
    }
    
    Ponto q = espiral_quadrada(n);
    Ponto t = espiral_triangular(n);
    Ponto c = espiral_criativa(n);
    
    printf("Espiral Quadrada (%d): (%d, %d)\n", n, q.x, q.y);
    printf("Espiral Triangular (%d): (%d, %d)\n", n, t.x, t.y);
    printf("Espiral Criativa (%d): (%d, %d)\n", n, c.x, c.y);
    
    return 0;
}

// melhor caso: n = 0, eh O(1)

// linha custo  repeticao
// 5-6   c5-6   1
// 8-11  c8-11  1
// 13-16 c13-16 1
// 18    O(n)   1
// 19    O(n)   1
// 20    O(n)   1
// 22-26 c22-26 1

// pior caso eh O(n)