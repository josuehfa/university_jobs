#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int eliminaRepetidos(int vet[10]){
	int i,j;
	int numElem = 0;
	int newVet[10];
	for(i = 0; i < 10; i++){
		if(vet[i] != 0){
			newVet[numElem] = vet[i];
			numElem = numElem +1;
			for(j = 0; j < 10; j++){
				if(vet[i] == vet[j] && i != j){
					vet[j] = 0;
				}
			}
		}
	}
	for(i = 0; i < numElem  ; i++){
		vet[i] = newVet[i];
	}
	return numElem;
}

void imprime(int vet[10],int numElem){
	cout << "\nElementos restantes do vetor: \n" ;
	for (int i = 0; i < numElem; i++)
	{
		cout << vet[i] << " ";
	}
	cout << "\n";
}


int main(){
	int i, numElem;
	int vet[10];
	cout << "Elementos gerados aleatoriamente: \n";
	for(i = 0; i < 10; i++){
		vet[i] = rand() % 9 + 12;
		cout << vet[i] << " ";
	}
	numElem = eliminaRepetidos(vet);
	imprime(vet,numElem);
}