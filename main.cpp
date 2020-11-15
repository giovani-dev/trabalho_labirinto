#include "global.hpp"
#include "mapa.hpp"
#include "jogador.hpp"
#include "interface.hpp"
#include "barra_carregamento.hpp"


int main(){
   // introducao();
   barra_de_carregamento();
   manipula_mapa("iterar");
   system("clear");
   // barra_de_carregamento();
   // cout.flush();
   manipula_mapa("iterar");
   // system("clear");
   imprime_menssagens();
   // Primeiro devemos chamar essa função, pois ela manipula a variavel global do mapa
   while(true){
      // manipula_mapa("imprimir");
      painel_jogador();
      jogador();
      if(global_vida <= 0){
         break;
      }
      system("clear");
   }
   creditos();
   return 0;
}