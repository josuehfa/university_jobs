#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


int main(int argc, char* argv[]){
	if (argc > 0) {
		double valor;
		double maior = atof(argv[1]);
		double menor = atof(argv[1]);
		double media = atof(argv[1]);
 		for (int i=2; i < argc; i++) {
 			media = media + atof(argv[i]);
			valor = atof(argv[i]);
			if (valor > maior)
				maior = valor;
			if (valor < menor)
				menor = valor;
		}
		media = media/(argc - 1);
		cout << "Maior valor = " << maior << endl;
		cout << "Menor valor = " << menor << endl;
		cout << "Media Aritmetica = " << media << endl;
	}
	else {
		cout << "Entre com os valores na forma: maiorNumero.exe n1 n2 n3 ..." << endl;
	}
} 