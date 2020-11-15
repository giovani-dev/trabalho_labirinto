#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

string msg_perder_jogo[2] = {"Voce caiu da ponte e morreu", "Você entrou no portal errado e morreu"};
string msg_perder_vida[2] = {"Você foi atacado por um enxame de abelhas", "Você pisou em um buraco e quebrou sua perna"};

int mapa[24][12] = {
    {-1, 2, -1, -1,  1, -1, -1,  1,  1,  1,  1, -1},
    {-1, 1, -1, -1,  1, -1, -1,  1, -1, -1,  1, -1},
    {-1, 1,  1,  1,  1,  1,  1,  1, -1, -1,  1, -1},
    {-1, 1, -1, -1,  1, -1, -1, -1,  1, -1,  1, -1},
    {-1, 1,  1,  1,  1,  1,  1, -1,  1,  1,  1, -1},
    {-1, 1, -1, -1, -1, -1, -1, -1,  1, -1, -1, -1},
    {-1, 1, -1, -1, -1, -1, -1, -1,  1, -1, -1, -1},
    {-1, 1, -1, -1, -1, -1, -1, -1,  1, -1, -1, -1},
    {-1, 1,  1,  1, -1, -1,  1, -1,  1, -1, -1, -1},
    {-1, 1, -1, -1, -1, -1,  1, -1,  1, -1, -1, -1},
    {-1, 1, -1, -1, -1, -1,  1,  1,  1, -1, -1, -1},
    {-1, 1, -1, -1, -1, -1,  1, -1, -1, -1, -1, -1},
    {-1, 1,  1,  1,  1,  1,  9,  1,  1,  1,  1, -1},
    {-1, 1, -1, -1,  1, -1,  1, -1, -1,  1, -1, -1},
    {-1, 1, -1, -1,  1, -1,  1, -1, -1,  1, -1, -1},
    {-1, 1,  1,  1,  1, -1,  1, -1, -1,  1, -1, -1},
    {-1, 1, -1, -1,  1, -1,  1, -1, -1,  1, -1, -1},
    {-1, 1, -1, -1,  1,  1, -1, -1, -1,  1,  1, -1},
    {-1, 1, -1, -1, -1,  1, -1, -1,  1,  1, -1, -1},
    {-1, 1,  1,  1,  1,  1, -1, -1, -1,  1, -1, -1},
    {-1, 1, -1,  1, -1, -1, -1, -1, -1,  1, -1, -1},
    {-1, 1, -1,  1,  1,  1,  1,  1,  1,  1, -1, -1},
    {-1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
    {-1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
};

int valor_posicao,
    qtde_maxima_movimentos,
    qtde_movimentos,
    erro_posicao;
int qtde_minima_movimentos = 16;
int global_vida = 100;
// a variavel posicao_jogador representa o eixo x, y. No qual 
int posicao_jogador[2] = {-1,-1};
int posicao_jogador_anterior[2];

bool final_gerado = false;