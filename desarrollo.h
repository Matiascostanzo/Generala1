#ifndef DESARROLLO_H_INCLUDED
#define DESARROLLO_H_INCLUDED

int unJugador(int puntmax, int bandera) {
    cout<<"MODO UN JUGADOR"<<endl;
    int vPuntaje[10], vGenerala[5], vRepetidos[6], i, cantrondas, j, k, num, num2, num3, dado1, dado2, dado3, dado4, u, servido, escalera, full, poker, generala, acc = 0, b;
    bool vJugadas[10];
    string jugadoruno;
    static string jugadormax;
    cout<<"JUGADOR: "<<endl;
    cin>>jugadoruno;
    cout<<"ELEGIR CANTIDAD DE RONDAS: "<<endl;
    cin>>cantrondas;
    system("cls");
    for (i=0;i<=9;i++) {
        vPuntaje[i] = 0;
        vJugadas[i] = false;
    }
    for (i=1;i<=cantrondas;i++) {
        system("cls");
        cout<<"RONDA: "<<i<<". JUGADOR: "<<jugadoruno<<endl;
        cout<<"PUNTAJE TOTAL: "<<acc<<endl;
        cargarAleatorio(vGenerala, 5);

        for(j=0;j<5;j++) {
            cout<<vGenerala[j];
        }

        cout<<endl;
        cout<<"VOLVER A LANZAR? (1 SI / 0 NO)"<<endl;
        cin>>num;
        servido = 0;
        if (num == 1) {
            cout<<endl;
            cout<<"CUANTOS DADOS?"<<endl;
            cin>>num2;
            switch(num2) {
               case 1:
                servido++;
                cout<<"QUE DADO DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cin>>num3;
                cambiarNumero(vGenerala, num3-1);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
               }
               break;
                cout<<endl;
               case 2:
                servido++;
                cout<<"CUALES DADOS DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cout<<"DADO 1: ";
                cin>>dado1;
                cout<<"DADO 2: ";
                cin>>dado2;
                cambiarNumero(vGenerala, dado1-1);
                cambiarNumero(vGenerala, dado2-1);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];

               }
               cout<<endl;
               break;

               case 3:
                servido++;
                cout<<"CUALES DADOS DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cout<<"DADO 1: ";
                cin>>dado1;
                cout<<"DADO 2: ";
                cin>>dado2;
                cout<<"DADO 3: ";
                cin>>dado3;
                cambiarNumero(vGenerala, dado1-1);
                cambiarNumero(vGenerala, dado2-1);
                cambiarNumero(vGenerala, dado3-1);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
                }
                cout<<endl;
                break;

                case 4:
                servido++;
                cout<<"CUALES DADOS DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cout<<"DADO 1: ";
                cin>>dado1;
                cout<<"DADO 2: ";
                cin>>dado2;
                cout<<"DADO 3: ";
                cin>>dado3;
                cout<<"DADO 4: ";
                cin>>dado4;
                cambiarNumero(vGenerala, dado1-1);
                cambiarNumero(vGenerala, dado2-1);
                cambiarNumero(vGenerala, dado3-1);
                cambiarNumero(vGenerala, dado4-1);

                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
                }
                cout<<endl;
                break;
             case 5:
                 servido = 0;
                cargarAleatorio(vGenerala, 5);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
               }
               cout<<endl;
               break;

             default:
               cout<<"OPCION INCORRECTA"<<endl;
            }
            cout<<endl;
            cout<<"VOLVER A LANZAR? (1 SI / 0 NO)"<<endl;
        cin>>num;
        if (num == 1) {
            cout<<endl;
            cout<<"CUANTOS DADOS?"<<endl;
            cin>>num2;
            switch(num2) {
                servido++;
                case 1:
                cout<<"QUE DADO DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cin>>num3;
                cambiarNumero(vGenerala, num3-1);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
               }
               break;
                cout<<endl;
               case 2:
                servido++;
                cout<<"CUALES DADOS DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cout<<"DADO 1: ";
                cin>>dado1;
                cout<<"DADO 2: ";
                cin>>dado2;
                cambiarNumero(vGenerala, dado1-1);
                cambiarNumero(vGenerala, dado2-1);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
               }
               cout<<endl;
               break;

                case 3:
                servido++;
                cout<<"CUALES DADOS DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cout<<"DADO 1: ";
                cin>>dado1;
                cout<<"DADO 2: ";
                cin>>dado2;
                cout<<"DADO 3: ";
                cin>>dado3;
                cambiarNumero(vGenerala, dado1-1);
                cambiarNumero(vGenerala, dado2-1);
                cambiarNumero(vGenerala, dado3-1);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
                }
                cout<<endl;
                break;

                case 4:
                servido++;
                cout<<"CUALES DADOS DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cout<<"DADO 1: ";
                cin>>dado1;
                cout<<"DADO 2: ";
                cin>>dado2;
                cout<<"DADO 3: ";
                cin>>dado3;
                cout<<"DADO 4: ";
                cin>>dado4;
                cambiarNumero(vGenerala, dado1-1);
                cambiarNumero(vGenerala, dado2-1);
                cambiarNumero(vGenerala, dado3-1);
                cambiarNumero(vGenerala, dado4-1);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
                }
                cout<<endl;
                break;

               case 5:
                servido = 0;
                cargarAleatorio(vGenerala, 5);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
               }
               cout<<endl;
               break;

               default:
                cout<<"OPCION INCORRECTA"<<endl;
               }
            }
        }

        ordenarVector(vGenerala, 5);

        for (k=0;k<=5;k++) {
            vRepetidos[k] = contarNumerosRepetidos(vGenerala, k+1);
        }
        cout<<endl;

        escalera = funcionEscalera(vGenerala, 5);
        full = funcionFull(vRepetidos, 6);
        poker = funcionPoker(vRepetidos, 6);
        generala = funcionGenerala(vRepetidos, 6);

       while (true){
        if (escalera == 1 && vJugadas[6] == false) {
            if (servido == 0) {
                cout<<"JUEGO DE ESCALERA SERVIDA. PUNTOS A OBTENER 25"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    vPuntaje[6] = 25;
                    vJugadas[6] = true;
                    break;
                }
            } else {
                cout<<"JUEGO DE ESCALERA. PUNTOS A OBTENER  20"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    vPuntaje[6] = 20;
                    vJugadas[6] = true;
                    break;
                }
            }


        }

        if (full == 1 && vJugadas[7] == false) {
            if (servido == 0) {
                cout<<"JUEGO DE FULL SERVID0. PUNTOS A OBTENER 35"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    vPuntaje[7] = 35;
                    vJugadas[7] = true;
                    break;
                }
            } else {
                cout<<"JUEGO DE FULL. PUNTOS A OBTENER  30"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    vPuntaje[7] = 30;
                    vJugadas[7] = true;
                    break;
                }
            }


        }

        if (poker == 1 && vJugadas[8] == false) {
            if (servido == 0) {
                cout<<"JUEGO DE POKER SERVIDO. PUNTOS A OBTENER 45"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    vPuntaje[8] = 45;
                    vJugadas[8] = true;
                    break;
                }
            } else {
                cout<<"JUEGO DE POKER. PUNTOS A OBTENER  40"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    vPuntaje[8] = 40;
                    vJugadas[8] = true;
                    break;
                }
            }


        }

        if (generala == 1 && vJugadas[9] == false) {
            if (servido == 0) {
                cout<<"JUEGO DE GENERALA SERVIDA. PARTIDA GANADA."<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    cout<<"FELICIDADES. GANASTE!"<<endl;
                    vPuntaje[9] = 50;
                    vJugadas[9] = true;
                    return 0;
                }
            } else {
                cout<<"JUEGO DE GENERALA. PUNTOS A OBTENER  50"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    vPuntaje[9] = 50;
                    vJugadas[9] = true;
                    break;
                }
            }


        }


        cout<<endl;

        for (u=0;u<=5;u++) {
            if (vRepetidos[u] >= 1 && vJugadas[u] == false) {
                cout<<"JUEGO DE "<<u+1<<". PUNTOS A OBTENER: "<<vRepetidos[u]*(u+1)<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    vPuntaje[u] = vRepetidos[u]*(u+1);
                    vJugadas[u] = true;
                    break;
                }
            }
        }

       break;
        }

        acc = 0;
        for (j=0; j<9;j++) {
        acc = acc + vPuntaje[j];
        }
        cout<<endl;

    }

    if (bandera == 0) {
        puntmax = acc;
        bandera++;
        jugadormax = jugadoruno;
    } else if (puntmax < acc) {
       puntmax = acc;
       jugadormax = jugadoruno;
    }

    cout<<"PUNTUACION FINAL: "<<acc<<endl;
    return puntmax;

}

int dosJugadores(int puntmax, int bandera) {

    cout<<"MODO DOS JUGADORES"<<endl;
    int mPuntaje[10][2], vGenerala[5], vRepetidos[6], cantrondas, i, j, u, jugadoractual, num, servido, num2, num3, dado1, dado2, dado3, dado4, k, full, escalera, generala, poker, a, acc1 = 0, acc2 = 0, acc3 = 0;
    bool mJugadas[10][2];
    string jugadoruno, jugadordos;
    cout<<"JUGADOR 1: "<<endl;
    cin>>jugadoruno;
    cout<<"JUGADOR 2: "<<endl;
    cin>>jugadordos;
    cout<<"ELEGIR CANTIDAD DE RONDAS: "<<endl;
    cin>>cantrondas;
    system("cls");
    for (i=0;i<=9;i++) {
        for (u=0;u<2;u++){
        mPuntaje[i][u] = 0;
        mJugadas[i][u] = false;
        }
    }

    for (i=1;i<=cantrondas;i++) {
        for (a=0;a<2;a++) {
        system("cls");
        cout<<"RONDA: "<<i<<endl;
        if (a == 0) {
            cout<<"TURNO DE: "<<jugadoruno<<endl;
            cout<<"PUNTAJE TOTAL: "<<acc1<<endl;
        } else {
            cout<<"TURNO DE: "<<jugadordos<<endl;
            cout<<"PUNTAJE TOTAL: "<<acc2<<endl;
        }
        cout<<endl;
        cargarAleatorio(vGenerala, 5);
        for(j=0;j<5;j++) {
            cout<<vGenerala[j];
        }
        cout<<endl;
        cout<<"VOLVER A LANZAR? (1 SI / 0 NO)"<<endl;
        cin>>num;
        servido = 0;
        if (num == 1) {
            cout<<endl;
            cout<<"CUANTOS DADOS?"<<endl;
            cin>>num2;
            switch(num2) {
               case 1:
                servido++;
                cout<<"QUE DADO DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cin>>num3;
                cambiarNumero(vGenerala, num3-1);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
               }
               break;
                cout<<endl;
               case 2:
                servido++;
                cout<<"CUALES DADOS DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cout<<"DADO 1: ";
                cin>>dado1;
                cout<<"DADO 2: ";
                cin>>dado2;
                cambiarNumero(vGenerala, dado1-1);
                cambiarNumero(vGenerala, dado2-1);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];

               }
               cout<<endl;
               break;

               case 3:
                servido++;
                cout<<"CUALES DADOS DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cout<<"DADO 1: ";
                cin>>dado1;
                cout<<"DADO 2: ";
                cin>>dado2;
                cout<<"DADO 3: ";
                cin>>dado3;
                cambiarNumero(vGenerala, dado1-1);
                cambiarNumero(vGenerala, dado2-1);
                cambiarNumero(vGenerala, dado3-1);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
                }
                cout<<endl;
                break;

                case 4:
                servido++;
                cout<<"CUALES DADOS DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cout<<"DADO 1: ";
                cin>>dado1;
                cout<<"DADO 2: ";
                cin>>dado2;
                cout<<"DADO 3: ";
                cin>>dado3;
                cout<<"DADO 4: ";
                cin>>dado4;
                cambiarNumero(vGenerala, dado1-1);
                cambiarNumero(vGenerala, dado2-1);
                cambiarNumero(vGenerala, dado3-1);
                cambiarNumero(vGenerala, dado4-1);

                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
                }
                cout<<endl;
                break;
             case 5:
                cargarAleatorio(vGenerala, 5);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
               }
               cout<<endl;
               break;

             default:
               cout<<"OPCION INCORRECTA"<<endl;
            }
            cout<<"VOLVER A LANZAR? (1 SI / 0 NO)"<<endl;
        cin>>num;
        if (num == 1) {
            cout<<endl;
            cout<<"CUANTOS DADOS?"<<endl;
            cin>>num2;
            switch(num2) {
                servido++;
                case 1:
                cout<<"QUE DADO DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cin>>num3;
                cambiarNumero(vGenerala, num3-1);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
               }
               break;
                cout<<endl;
               case 2:
                servido++;
                cout<<"CUALES DADOS DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cout<<"DADO 1: ";
                cin>>dado1;
                cout<<"DADO 2: ";
                cin>>dado2;
                cambiarNumero(vGenerala, dado1-1);
                cambiarNumero(vGenerala, dado2-1);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
               }
               cout<<endl;
               break;

                case 3:
                servido++;
                cout<<"CUALES DADOS DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cout<<"DADO 1: ";
                cin>>dado1;
                cout<<"DADO 2: ";
                cin>>dado2;
                cout<<"DADO 3: ";
                cin>>dado3;
                cambiarNumero(vGenerala, dado1-1);
                cambiarNumero(vGenerala, dado2-1);
                cambiarNumero(vGenerala, dado3-1);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
                }
                cout<<endl;
                break;

                case 4:
                servido++;
                cout<<"CUALES DADOS DESEA VOLVER A TIRAR? (1, 2, 3, 4 o 5)"<<endl;
                cout<<"DADO 1: ";
                cin>>dado1;
                cout<<"DADO 2: ";
                cin>>dado2;
                cout<<"DADO 3: ";
                cin>>dado3;
                cout<<"DADO 4: ";
                cin>>dado4;
                cambiarNumero(vGenerala, dado1-1);
                cambiarNumero(vGenerala, dado2-1);
                cambiarNumero(vGenerala, dado3-1);
                cambiarNumero(vGenerala, dado4-1);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
                }
                cout<<endl;
                break;

               case 5:
                cargarAleatorio(vGenerala, 5);
                for(j=0;j<5;j++) {
                cout<<vGenerala[j];
               }
               cout<<endl;
               break;

               default:
                cout<<"OPCION INCORRECTA"<<endl;
               }
            }
        }


        ordenarVector(vGenerala, 5);

        for (k=0;k<=5;k++) {
            vRepetidos[k] = contarNumerosRepetidos(vGenerala, k+1);
        }
        cout<<endl;


        escalera = funcionEscalera(vGenerala, 5);
        full = funcionFull(vRepetidos, 6);
        poker = funcionPoker(vRepetidos, 6);
        generala = funcionGenerala(vRepetidos, 6);

       while (true){
        if (escalera == 1 && mJugadas[6][a] == false) {
            if (servido == 0) {
                cout<<"JUEGO DE ESCALERA SERVIDA. PUNTOS A OBTENER 25"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    mPuntaje[6][a] = 25;
                    mJugadas[6][a] = true;
                    break;
                }
            } else {
                cout<<"JUEGO DE ESCALERA. PUNTOS A OBTENER  20"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    mPuntaje[6][a] = 20;
                    mJugadas[6][a] = true;
                    break;
                }
            }


        }

        if (full == 1 && mJugadas[7][a] == false) {
            if (servido == 0) {
                cout<<"JUEGO DE FULL SERVID0. PUNTOS A OBTENER 35"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    mPuntaje[7][a] = 35;
                    mJugadas[7][a] = true;
                    break;
                }
            } else {
                cout<<"JUEGO DE FULL. PUNTOS A OBTENER  30"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    mPuntaje[7][a] = 30;
                    mJugadas[7][a] = true;
                    break;
                }
            }


        }

        if (poker == 1 && mJugadas[8][a] == false) {
            if (servido == 0) {
                cout<<"JUEGO DE POKER SERVIDO. PUNTOS A OBTENER 45"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    mPuntaje[8][a] = 45;
                    mJugadas[8][a] = true;
                    break;
                }
            } else {
                cout<<"JUEGO DE POKER. PUNTOS A OBTENER  40"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    mPuntaje[8][a] = 40;
                    mJugadas[8][a] = true;
                    break;
                }
            }


        }

        if (generala == 1 && mJugadas[9][a] == false) {
            if (servido == 0) {
                cout<<"JUEGO DE GENERALA SERVIDA. PUNTOS A OBTENER 50"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    mPuntaje[9][a] = 50;
                    mJugadas[9][a] = true;
                    break;
                }
            } else {
                cout<<"JUEGO DE GENERALA. PUNTOS A OBTENER  50"<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    mPuntaje[9][a] = 50;
                    mJugadas[9][a] = true;
                    break;
                }
            }


        }


        cout<<endl;

        for (u=0;u<=5;u++) {
            if (vRepetidos[u] >= 1 && mJugadas[u][a] == false) {
                cout<<"JUEGO DE "<<u+1<<". PUNTOS A OBTENER: "<<vRepetidos[u]*(u+1)<<endl;
                cout<<"ELEGIR? (1 SI / 0 NO)"<<endl;
                cin>>num3;
                if (num3 == 1){
                    mPuntaje[u][a] = vRepetidos[u]*(u+1);
                    mJugadas[u][a] = true;
                    break;
                }
            }
        }

       break;
        }

        }

        acc1 = 0;
        acc2 = 0;
        for (j=0; j<9;j++) {
        acc1 = acc1 + mPuntaje[j][0];
        }
        for (j=0; j<9;j++) {
        acc2 = acc2 + mPuntaje[j][1];
      }

    }


    cout<<"Puntuacion total de "<<jugadoruno<<": "<<acc1<<endl;
    cout<<"Puntuacion total de "<<jugadordos<<": "<<acc2<<endl;

    if (acc1 > acc2) {
        cout<<"El ganador es "<<jugadoruno<<endl;
        if (bandera == 0) {
        puntmax = acc1;
        bandera++;
    } else if (puntmax < acc1) {
       puntmax = acc1;
    }
    } else if (acc1 < acc2) {
        cout<<"El ganador es "<<jugadordos<<endl;
        if (bandera == 0) {
        puntmax = acc2;
    } else if (puntmax < acc2) {
       puntmax = acc2;
    }
    } else {
        cout<<jugadoruno<<" y "<<jugadordos<<" empataron!"<<endl;
        if (bandera == 0) {
        puntmax = acc1;
    } else if (puntmax < acc1) {
        puntmax = acc1;
    }
    }
return puntmax;
}


int mayorPuntaje(int puntmax, bool anterior, int maxanterior) {
    cout<<"MAYOR PUNTAJE:"<<endl;
    if (anterior == false) {
        cout<<puntmax<<endl;
        maxanterior = puntmax;
    } else if (puntmax > maxanterior) {
       cout<<puntmax<<endl;
       maxanterior = puntmax;
    } else {
      cout<<maxanterior<<endl;
    }
    return maxanterior;
}
#endif // DESARROLLO_H_INCLUDED
