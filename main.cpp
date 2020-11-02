#include "global.hpp"
#include "mapa.hpp"
#include "jogador.hpp"


int main(){
   // Primeiro devemos chamar essa função, pois ela manipula a variavel global do mapa
   manipula_mapa();
   while(true){
      painel_jogador();
      jogador();
      if(global_vida <= 0){
         break;
      }
   }
   return 0;
}