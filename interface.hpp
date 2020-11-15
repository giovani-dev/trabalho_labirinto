#include <time.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

float tempo;
int tamanho_barra = 25;
string barra;


void painel_jogador(){
    cout << "---------------------------------------------- Painel do Jogador -----------------------------------------" << endl << endl;
    cout << "Total da sua vida: " << global_vida;
    cout << endl;
    cout <<  "Sua posição atual é: " "X(" << posicao_jogador[0] << ")" <<  " " << "Y(" << posicao_jogador[1] << ")" << endl;
    cout << "Quantidade minima de movimentos: " << qtde_minima_movimentos << endl;
    cout << "Total de passos dados: " << qtde_movimentos;
    cout << endl << endl;
    cout << "----------------------------------------------------------------------------------------------------------" << endl << endl;
}

// ----------------------------------------------- BARRA DE CARREGAMENTO -----------------------------------------------

float percentual(float tempo_decorrido){
    return (tempo_decorrido/tamanho_barra)*100;
}

void get_barra(int tempo_decorrido){
    cout << "   Após sua equipe desaperecer misteriosamente, você" << endl;
    cout << "está cego e é o único sobrevivente, você está correndo" << endl;
    cout << "do monstro, mas a única coisa que encontra a frente é um" << endl;
    cout << "labirinto de pontes sobre um precipicio." << endl;
    cout << "   Seu objetivo é encontrar um portal aleatoria. Bom jogo" << endl;
    cout << "e boa sorte..." << endl << endl;
    cout << "Carregando: " << percentual(tempo_decorrido) << "%" << "    " << endl << endl;
    cout << barra;
    cout.flush();
}

void renderiza_barra_de_carregamento(){
    int i;
    float tempo_decorrido = 0;
    for(i=0; i<tamanho_barra; i++){
        barra.append("#");
        get_barra(tempo_decorrido);
        sleep(tempo);
        system("clear");
        // system("cls");
        tempo_decorrido += 1;
    }
    get_barra(i);
}

void barra_de_carregamento(){
    system("clear");
    tempo = 1;
    renderiza_barra_de_carregamento();
    cout << endl;
    cout << endl;
}