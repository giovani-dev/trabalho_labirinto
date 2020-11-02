#include "global.h"

// O jogador vai levar dano quando o valor da posicao atual for > 5 e < 9
void gera_dano_aleatorio(int posicao){
    if(posicao > 5 && posicao < 9){
        srand ( time(NULL) );
        global_vida -= rand() % 10;
    }
}

void set_posicao_jogador(int eixo_x, int eixo_y){
    posicao_jogador[0] = eixo_x;
    posicao_jogador[1] = eixo_y;
}

void movimenta_jogador(){
    if(posicao_jogador[0] > 6 || posicao_jogador[1] > 12){
        total_passos_errados += 1;
    }
    if(){}
}

void jogador(){
    int eixo_x, eixo_y;

    cout << "Digite quantas casas voce quer andar pelo mapa:" << endl;

    cout << "Eixo x: ";
    cin >> eixo_x;

    cout << endl;

    cout << "Eixo y: ";
    cin >> eixo_y;

    set_posicao_jogador(eixo_x, eixo_y);
    movimenta_jogador();
}