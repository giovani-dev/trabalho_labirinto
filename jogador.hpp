#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

// O jogador vai levar dano quando o valor da posicao atual for > 5 e < 9
void dano_aleatorio(){
    if(valor_posicao >= 6 && valor_posicao <= 8){
        srand ( time(NULL) );
        global_vida -= rand() % 10;
    }
}

void set_posicao_jogador(int eixo_x, int eixo_y){
    // cout << mapa[1] << " - " << mapa[2] << endl;
    // printf("%d", mapa[1]);
    int eixo_x_p, eixo_y_p;
    for(eixo_y_p = 0; eixo_y_p <= 23; eixo_y_p++){
      for(eixo_x_p = 0; eixo_x_p <= 11; eixo_x_p++){
          if(eixo_x)
      }
      cout << endl;
   }
    posicao_jogador_anterior[0] = posicao_jogador[0];
    posicao_jogador_anterior[1] = posicao_jogador[1];
    posicao_jogador[0] = eixo_x;
    posicao_jogador[1] = eixo_y;
    valor_posicao = mapa[posicao_jogador[0]][posicao_jogador[1]];
}

string msg_final_perder_jogo(){
    int n;
    srand ( time(NULL) );
    n = rand() % 2;
    return msg_perder_jogo[n];
}

string msg_final_perder_vida(){
    int n;
    srand ( time(NULL) );
    n = rand() % 2;
    return msg_perder_vida[n];
}

void dano_jogador(){
    cout << posicao_jogador[0] << endl;
    cout << posicao_jogador[1] << endl;
    if(posicao_jogador[0] > 11 || posicao_jogador[1] > 23){
        posicao_jogador[0] = posicao_jogador_anterior[0];
        posicao_jogador[1] = posicao_jogador_anterior[1];
        erro_posicao += 1;
        cout << msg_final_perder_vida() << endl;
        sleep(1);
    }
    if(valor_posicao == -1 || erro_posicao >= 3){
        global_vida -= 100;
        cout << msg_final_perder_jogo() << endl;
    }else{
        dano_aleatorio();
    }
}

void movimenta_jogador(int eixo_x, int eixo_y){
    qtde_movimentos += 1;
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

void creditos(){
    cout << "Trabalho realizado pelos alunos: Giovani Liskoski Zanini e Ian Wisentainer" << endl;
}