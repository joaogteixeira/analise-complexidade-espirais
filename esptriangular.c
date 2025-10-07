#include "espirais.h"

Ponto espiral_triangular(int n) {
    if (n == 0) return (Ponto){0, 0};

    int x = 0, y = 0;
    int lado = 0, passo = 0;
    int dx[] = {1, -1, -1};
    int dy[] = {0, 1, -1};
    int incremento[] = {4, 2, 2};
    int lados[] = {1, 1, 2};

    for (int i = 1; i <= n; i++) {
        if(passo == lados[lado])
        {
            lados[lado] += incremento[lado];
            lado = (lado + 1) % 3;
            passo = 0;
        }

        x += dx[lado];
        y += dy[lado];
        passo++;
    }

    return (Ponto){x, y};
}

// linha custo  repeticao
// 4     c4     1
// 6-11  c6-11  1
// 13    c13    n+1
// 14-19 c14-19 n
// 21-23 c21-23 n
// 26    c26    1

// pior caso eh O(n)
