float tempo;

float percentual(float tempo_decorrido){
    return (tempo_decorrido/tamanho_barra)*100;
}

void get_barra(int tempo_decorrido){
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
        tempo_decorrido += 1;
    }
    get_barra(i);
}

void barra_de_carregamento(){
    tempo = 1;
    renderiza_barra_de_carregamento();
    cout << endl;
    cout << endl;
}