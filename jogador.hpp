#include "global.hpp"


// O jogador vai levar dano quando o valor da posicao atual for > 5 e < 9
void dano_aleatorio(){
    if(valor_posicao > 5 && valor_posicao < 9){
        srand ( time(NULL) );
        global_vida -= rand() % 10;
    }
}


void set_posicao_jogador(int eixo_x, int eixo_y){
    posicao_jogador[0] = eixo_x;
    posicao_jogador[1] = eixo_y;
    valor_posicao = mapa[posicao_jogador[0]][posicao_jogador[1]];
}


void dano_jogador(){
    // se o jogador sair do mapa ele morre tbm
    if(posicao_jogador[0] > 6 || posicao_jogador[1] > 12){
        global_vida -= 100;
    }
    // Caso o jogador va para uma localização onde não faz parte de um local 'andavel'
    if(valor_posicao == 0){
        global_vida -= 100;
    }else{
        dano_aleatorio();
    }
}


void movimenta_jogador(int eixo_x, int eixo_y){
    set_posicao_jogador(eixo_x, eixo_y);
    dano_jogador();
}


void jogador(){
    int eixo_x, eixo_y;

    cout << "Digite quantas casas voce quer andar pelo mapa:" << endl;
    
    cout << "Eixo x: ";
    cin >> eixo_x;

    cout << endl;

    cout << "Eixo y: ";
    cin >> eixo_y;

    movimenta_jogador(eixo_x, eixo_y);
}