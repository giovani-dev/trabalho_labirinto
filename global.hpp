#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
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

int tamanho_barra = 25;
string barra;

char menssagens_inicial[] = "Depois de você entrar em uma masmorra de nível baixo com seu grupo de companheiros, descobre que era uma armadilha de monstros, e sua equipe toda acaba morrendo, você tenta fugir e a única coisa que encontra a frente é um labirinto";