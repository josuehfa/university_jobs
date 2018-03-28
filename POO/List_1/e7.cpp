#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <time.h>
using namespace std;


void imprimeCartas(int cartas[4][13], string naipes[4], string faces[13]){
	int i,j,k;
	for(i = 1; i < 53; i ++){
		for(j = 0; j < 4; j++ ){
			for(k = 0; k < 13; k++ ){
				if(i == cartas[j][k]){
					cout << i << "ª - " << faces[k] << naipes[j] << "\n";
				}
			}
		}
	}
}

void embaralha(int cartas[4][13]){
	int i;
	int altNaipe;
	int altFaces;
	srand (time(NULL));
	for(i = 1; i < 53; i++){
		altNaipe = rand() % 4;
		altFaces = rand() % 13;
		if(cartas[altNaipe][altFaces] == 0){ 
			cartas[altNaipe][altFaces] = i;
		}else{
			i--;
		}
	}
}

int main(){
	
	int cartas[4][13] = {0};
	string naipes[4] = {"de Copas", "de Ouros","de Paus","de Espadas"};
	string faces[13] = {"Ás ", "Dois ", "Três ","Quatro ","Cinco ","Seis ","Sete ", "Oito ","Nove ", "Dez ", "Valete ", "Dama ", "Rei "};
	cout << "Embaralhando cartas...  \n";
	embaralha(cartas);
	cout << "Ordem das cartas após o embaralhamento:\n";
	imprimeCartas(cartas, naipes, faces);
	return 0;
}
