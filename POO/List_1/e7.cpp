#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <time.h>
using namespace std;


void imprimeCartas(int cartas[4][13], string naipes[4], string faces[4]){
	int i,j,k;
	for(i = 1; i < 53; i ++){
		for(j = 0; j < 4; j++ ){
			for(k = 0; k < 13; k++ ){
				if(cartas[j][k] == i){
					cout << faces[j] << naipes[k] << "\n";
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
	// 0 - copas; 1 - ouros; 2 - paus; 3 - espadas.
	int cartas[4][13] = {0};
	string naipes[4] = {"de Copas", "de Ouros","de Paus","de Espadas"};
	//std::vector<int> v(begin(napies), end(naipes));
	string faces[13] = {"Ás ", "Dois ", "Três ","Quatro ","Cinco ","Seis ","Sete ", "Oito ","Nove ", "Dez ", "Valete ", "Dama ", "Rei "};
	//std::vector<int> v(begin(faces), end(faces));
	embaralha(cartas);
	imprimeCartas(cartas, naipes, faces);
}
