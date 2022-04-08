//librerias 
#include <iostream>
#include <cmath>
using namespace std;

int numerosabrazados(int lista, int largo){ //Recibe una lista con los numeros a comparar y el largo

/*Se define una lista de 10 listas, cada sublista es para un digito del 0 al 9 
Creamos un array para los numeros no abarzados
Tambien tenemos un array de acumuladores para cada digito del 0 al 9*/

int Noabrazado []={};
int Listadelistas[]={};
int acumuladores []={};
int digitoeval, digitocomp, abrazoM;

//Iniciamos tres ciclos anidados

for(int i=0; i<largo; i++){ //Este ciclo recorre la lista original

    //Inicilizamos los acumuladores en 0

        acumuladores[0] = 0;
        acumuladores[1] = 0;
        acumuladores[2] = 0;
        acumuladores[3] = 0;
        acumuladores[4] = 0;
        acumuladores[5] = 0;
        acumuladores[6] = 0;
        acumuladores[7] = 0;
        acumuladores[8] = 0;
        acumuladores[9] = 0;

    for(int j=0; j<largo; j++){ 
        /*Este ciclo compara el elemento con indice i con cada uno de los numeros
         de la lista original, menos consigo mismo.*/

        if(j!=i) { //Esto evita la comparación con el mismo numero

            //Se define la cantidad de digitos que tiene el numero que se esta evaluando

            int cantdigitos= abs(log(lista[i]));

            for(int k=1; k=cantdigitos; k++){

                /*Compara el digito en la posicion k con el digito en la posicion k del elemento con
                indice j de la lista. Si esos digitos coinciden, se suma 1 al acumulador que tiene el 
                indice igual al valor del digito*/

                double numero = lista[i]/10^k;
                int parteEntera = (int) numero;
                double parteDecimal = numero - parteEntera;
                digitoeval=parteDecimal*(10^k);

                double numero = lista[j]/10^k;
                int parteEntera = (int) numero;
                double parteDecimal = numero - parteEntera;
                digitocomp=parteDecimal*(10^k);

                if(digitoeval=digitocomp){

                    acumuladores[digitoeval]++; //aqui se acumula
                }
            }
            abrazoM=0; 
            for(int l=1; l=10; l++){ 

                //En este for vamos a determinar cual digito de lista[i] tiene mayor cantidad de abrazos

                if(acumuladores[l]>abrazoM){
                    abrazoM=acumuladores[l]; //aqui subsiste el indice igual al digito que tiene mas abrazos
                }
            }
            if(abrazoM=0){ 
                //si lista[i] no tiene abrazos se pasa a la lista de numeros sin abrazos            
                }
            else{
                //caso contrario, se pasa lista[i] a la sublista en la lista de listas con indice abrazoM
            }
        }                   
    }
}
return Listadelistas;
}

/*
N=la lista de los numeros a comparar
criterio voraz= la cantidad de coincidencias que tiene cada digito del numero a evaluar 
optimo local= el digito del numero a evaluar que acumula mas coincidencias con los otros numeros de la lista
optimo global= por la forma en que esta diseñado el algoritmo el optimo global es igual al optimo local
*/


int main(){
    
  	return 0;

}

