#include "global.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int numero_armadilha(){
   int random_event = rand() % 7;
   if(random_event == 0){
      random_event = numero_armadilha();
   }
   return random_event;
}


void gera_armadilhas(){
   int caracter, linha;

   for(linha = 0; linha <= 5; linha++){
      srand ( time(NULL) );
      for(caracter = 0; caracter <= 11; caracter++){
         if(mapa[linha][caracter] > 0 && mapa[linha][caracter] < 9 && mapa[linha][caracter] != 2){
            mapa[linha][caracter] = numero_armadilha();
         }
         cout << mapa[linha][caracter];
      }
      cout << endl;
   }
}


int main(){
   // Primeiro devemos chamar essa função, pois ela manipula a variavel global do mapa
   gera_armadilhas();
   cout << mapa[6][1] << endl;
   return 0;
}