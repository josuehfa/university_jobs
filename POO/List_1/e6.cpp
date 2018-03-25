#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;


void imprime(int valoresReg[13], int numRodadas){
	int i;
	int media;
	cout << "TABELA 1 - Valores obtidos jogando os dados:\n\n";
	cout << "Soma | " << "   2    |  " << "  3    |   "<< " 4    |   "<< " 5    |   "<< " 6    |   "<< " 7    |   "<< " 8    |   "<< " 9    |   "<< "10    |   "<< "11    |   "<< "12   | \n";
	cout << "     | ";
	for(i = 2; i < 13; i++){
		if(i >= 10){
			cout << "   " << valoresReg[i] << "  |";		
		}else{
			cout << "  " << valoresReg[i] << "   |";
		}
	}	
	cout << "\n";
	media = valoresReg[7];
	if((numRodadas/6 - numRodadas/40) < media && (numRodadas/6 + numRodadas/40) > media ){
		cout << "\nAs somas são razoaveis [" << media << "/" << numRodadas/6 <<"], existe aproximadamente 1/6 de somas iguais a 7\n";
	}else{
		cout << "\nAs somas não estão razoaveis ["<< media <<"/" << numRodadas/6 <<"], existe um valor diferente de 1/6 do total de somas iguais a 7 \n"; 
	}

}



int main(){
	int i, d1, d2, sum;
	int numRodadas = 34000;
	int valoresReg[13] ={0};
	srand (time(NULL));
	for(i = 0; i < numRodadas; i++){
		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
		sum = d1 + d2;
		valoresReg[sum] = valoresReg[sum] + 1;
	}
	imprime(valoresReg, numRodadas);
}
