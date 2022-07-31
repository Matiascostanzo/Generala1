#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void cargarAleatorio(int v[], int tam){
  int i, limite = 6;
  srand(time(NULL));
  for( i=0; i<tam; i++ ){
        v[i]=(rand()%limite)+1;
  }
}

void cambiarNumero(int v[], int pos){
 srand(time(NULL));
 v[pos]=(rand()%6)+1;
}

int contarNumerosRepetidos(int v[], int numero){
  int i, cant=0, tam = 5;
    for(i=0;i<tam;i++){
        if(v[i]==numero) cant++;
        }
    return cant;
}

void ordenarVector(int v[], int tam ){
    int i,j, posmin, aux;
    for(i=0;i<tam-1;i++){
        posmin=i;
        for(j=i+1;j<tam;j++){
            if(v[j]<v[posmin]) posmin=j;
        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }

}

int funcionEscalera (int v[], int tam) {
     int i, cont = 0;
     for (i=0; i<tam; i++){
        if (v[i+1] - v[i] == 1) {
            cont++;
        }
    }
      if (cont == 4) {
        return 1;
      } else {
        return 0;
      }

}

int funcionFull (int v[], int tam) {
    int i;
    bool tres = false, dos = false;
    for (i=0; i<tam; i++){
        if (v[i] == 3){
            tres = true;
        }

        if (v[i] == 2) {
           dos = true;
         }
  }

  if (tres && dos) {
    return 1;
  } else {
   return 0;
  }

}

int funcionPoker (int v[], int tam) {
   int i;
   bool poker = false;
   for (i=0; i<tam; i++) {
    if (v[i] == 4) {
        poker = true;
    }
   }

   if (poker) {
    return 1;
   } else {
    return 0;
   }
}

int funcionGenerala (int v[], int tam) {
   int i;
   bool generala = false;
   for (i=0; i<tam; i++) {
    if (v[i] == 5) {
        generala = true;
    }
   }

   if (generala) {
    return 1;
   } else {
    return 0;
   }
}

#endif // FUNCIONES_H_INCLUDED
