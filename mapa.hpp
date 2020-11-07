// #include "global.hpp"

int numero_armadilha(){
   int random_event = rand() % 7;
   if(random_event == 0){
      random_event = numero_armadilha();
   }
   return random_event;
}

void gerar_final_do_jogo(int eixo_x, int eixo_y){
   if(qtde_maxima_movimentos >= qtde_minima_movimentos && !final_gerado && (rand() % 6) == 1){
      mapa[eixo_x][eixo_y] = 9;
      final_gerado = true;
   }
}

void gera_iteracao(int eixo_x, int eixo_y){
   if(mapa[eixo_y][eixo_x] > 0 && mapa[eixo_y][eixo_x] <= 8 && mapa[eixo_y][eixo_x] != 2){
      mapa[eixo_y][eixo_x] = numero_armadilha();
      qtde_maxima_movimentos += 1;
      gerar_final_do_jogo(eixo_x, eixo_y);
   }
}

void manipula_mapa(string tipo_manipulacao){
   int eixo_x, eixo_y;

   for(eixo_y = 0; eixo_y <= 23; eixo_y++){
      srand ( time(NULL) );
      for(eixo_x = 0; eixo_x <= 11; eixo_x++){
         if(tipo_manipulacao == "iterar")
            gera_iteracao(eixo_x, eixo_y);
         if(tipo_manipulacao == "imprimir")
            cout << mapa[eixo_y][eixo_x];
      }
      cout << endl;
   }

   cout << endl << endl << sizeof(mapa[0]) << endl;
}