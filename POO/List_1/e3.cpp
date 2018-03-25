#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;

bool vectorIn(int vetor[100], int x){
	int i;
	int cont = 0;

	for(i = 0; i < 100; i++){
		if(vetor[i] == x){
			cont = 1;
			return true;
		}
	}
	if (cont == 0)
		return false;
}

int main(int argc, char* argv[]){
	int vetor[100];
	int i,in;
	int cont = 0;
	bool exist;
	srand (time(NULL));
	for (i = 0; i < 100; i++){
		vetor[i] = (rand() % 101 + 99);
		}
	while(cont == 0){
		cout << "Digite o numero a ser pesquisado no vetor de numeros aleatorios: \nPara sair digite '-1' \n ";
		cin >> in;
		if(in == -1){
			cont =1;
			break;
		}
		exist = vectorIn(vetor,in);
		if(exist == true){
			cout << "O numero digitado esta presente no vetor de numeros aleatorios \n";
		}else{
			cout << "O numero digitado NAO esta presente no vetor de numeros aleatorios \n";
		}
		cout << "\n";
	}
	cout << "Vetor de numeros aleatorios: \n";
	for(i = 0; i < 100; i++){
		cout << vetor[i] << " ";
	}
	cout << "\n";
}

