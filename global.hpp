#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int mapa[6][12] = {
    {0, 2, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0},
    {0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 9, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

int valor_posicao;

int global_vida = 100;

// a variavel posicao_jogador representa o eixo x, y. No qual 
int char posicao_jogador[2];
