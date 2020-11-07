#include "global.hpp"
#include "mapa.hpp"
#include "jogador.hpp"
#include "interface.hpp"


int main(){
   manipula_mapa("iterar");
   system("clear");
   // Primeiro devemos chamar essa função, pois ela manipula a variavel global do mapa
   while(true){
      manipula_mapa("imprimir");
      painel_jogador();
      jogador();
      if(global_vida <= 0){
         break;
      }
      system("clear");
   }
   return 0;
}