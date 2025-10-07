#ifndef ESPIRAIS_H
#define ESPIRAIS_H

typedef struct {
    int x;
    int y;
} Ponto;

Ponto espiral_quadrada(int n);
Ponto espiral_triangular(int n);
Ponto espiral_criativa(int n);

#endif