#include <iostream>
#include <cstdlib>
#include<cstdio>
#include<ctime>

using namespace std;

#include "rlutil.h"
#include "funciones.h"
#include "desarrollo.h"

int main() {

    rlutil::setBackgroundColor(rlutil::BLACK);
    rlutil::setColor(rlutil::GREEN);

    int opc, puntmax = 0, bandera = 0, maxanterior = 0;

    bool anterior = false;
    while(true){
    system("cls");
    cout<<"---TP FINAL: GENERALA---"<<endl;
    cout<<"OPCION 1: UN SOLO JUGADOR"<<endl;
    cout<<"OPCION 2: DOS JUGADORES"<<endl;
    cout<<"OPCION 3: MOSTRAR PUNTAJE MAYOR"<<endl;
    cout<<"OPCION 4: SALIR"<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"OPCION: ";
    cin>>opc;
    switch(opc) {
          case 1: puntmax = unJugador(puntmax, bandera);
          break;
          case 2: puntmax = dosJugadores(puntmax, bandera);
          break;
          case 3:
              if (puntmax == 0 && anterior == false) {
                 cout<<"NO HAY PUNTAJE MAYOR AUN"<<endl;
              } else {
                 maxanterior = mayorPuntaje(puntmax, anterior, maxanterior);
                 anterior = true;

              }

          break;
          case 4:
            exit(1);
          default:
            cout<<"OPCION INCORRECTA."<<endl;
    }
    system("pause");
  }

}
