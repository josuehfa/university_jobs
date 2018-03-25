#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;


bool simetrica(int matriz[10][10]){
	int i,j;
	int sim = 0;
	for(i = 0;i < 10; i++){
		for(j = 0;j < 10; j++){
			if(matriz[i][j] != matriz[j][i]){
				return false;
			}
		}
	}
	return true;
}

void imprime(int matriz[10][10]){
	int i,j;
	cout << "Matriz preenchida com valores aleatorios:\n\n";
	for(i = 0;i < 10; i++){
		for(j = 0;j < 10; j++){
			cout << matriz[i][j] << " "; 
		}
	cout << "\n";
	}
}

int main(){
	int i,j;
	bool sim;
	int matriz [10][10];
	srand (time(NULL));
	for(i = 0;i < 10; i++){
		for(j = 0;j < 10; j++){
			matriz[i][j] = rand()%5;
		}
	}
	imprime(matriz);
	sim = simetrica(matriz);
	if(sim == true){
		cout << "\nEssa matriz é simetrica\n\n";
	}else{
		cout << "\nEssa matriz não é simetrica\n\n";
	}
}