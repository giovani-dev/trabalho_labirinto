// O jogador vai levar dano quando o valor da posicao atual for > 5 e < 9
void dano_aleatorio(){
    if(valor_posicao >= 6 && valor_posicao <= 8){
        srand ( time(NULL) );
        global_vida -= rand() % 10;
    }
}

bool valida_posicao_jogador(int eixo_x, int eixo_y){
    if( (posicao_jogador[0] + 1) != eixo_x && (posicao_jogador[0] + 1) != eixo_y)
        return false;
    else
        return true;
}


void set_posicao_jogador(int eixo_x, int eixo_y){
    posicao_jogador_anterior[0] = posicao_jogador[0];
    posicao_jogador_anterior[1] = posicao_jogador[1];
    if(valida_posicao_jogador(eixo_x, eixo_y))
        posicao_jogador[0] = eixo_x;
        posicao_jogador[1] = eixo_y;
        valor_posicao = mapa[posicao_jogador[0]][posicao_jogador[1]];
}


void dano_jogador(){
    cout << posicao_jogador[0] << endl;
    cout << posicao_jogador[1] << endl;
    if(posicao_jogador[0] > 11 || posicao_jogador[1] > 23){
        posicao_jogador[0] = posicao_jogador_anterior[0];
        posicao_jogador[1] = posicao_jogador_anterior[1];
        erro_posicao += 1;
        cout << "Entra no if de posicao invalida" << endl;
    }
    if(valor_posicao == -1 || erro_posicao >= 3){
        global_vida -= 100;
        cout << "Entra no if de morte" << endl;
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