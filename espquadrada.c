#include <stdio.h>

typedef struct {
    int x;
    int y;
} Ponto;

Ponto espiral_quadrada(int n);

Ponto espiral_quadrada(int n) {
    int x = 0, y = 0;
    int lado_do_quadrado = 0;

    for(; lado_do_quadrado * lado_do_quadrado <= n; ++lado_do_quadrado)
        ; // encontra o lado do quadrado de area n

    --lado_do_quadrado;

    if(lado_do_quadrado % 2 == 1) {
        ++y;
        n -= lado_do_quadrado * lado_do_quadrado;
        x += lado_do_quadrado / 2;
        y += lado_do_quadrado / 2;

        if(n <= lado_do_quadrado) {
            x -= n;
        }
        else {
            x -= lado_do_quadrado;
            n -= lado_do_quadrado;
            y -= n;
        }
    }
    else {
        x -= lado_do_quadrado / 2;
        y -= lado_do_quadrado / 2;
        n -= lado_do_quadrado * lado_do_quadrado;

        if(n <= lado_do_quadrado) {
            x += n;
        }
        else {
            x += lado_do_quadrado;
            n -= lado_do_quadrado;
            y += n;
        }
    }

    return (Ponto){x, y};
}

// linha  custo  repeticoes
// 30-67  O(1)   1
// 25     O(1)   sqrt(n)

// pior caso: O(sqrt(n))