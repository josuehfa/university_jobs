#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


void troca1(int a, int b) {
	int aux = a;
	a = b;
	b = aux;
}

void troca2(int* v, int length) {
	int aux;
	for (int i=0; i< length/2; i++) {
		aux = v[i];
		v[i] = v[length-i-1];
		v[length-i-1] = aux;
	}
}

void imprime(int* v, int length) {
	for(int i=0; i<length; i++)
		cout << "v[" << i << "] = " << v[i] << endl;
}

int main() {
	int v[4];
	v[0] = (int)5.25;
	v[1] = 1;
	v[2] = 2;
	v[3] = 3;
	troca1(v[0],v[1]);
	int length = sizeof(v)/sizeof(v[0]);
	imprime(v, length);
	troca2(v, length);
	imprime(v, length);
	int* p;
	p = &length;
	cout << p++ << " \n";
	cout << (*p)++ << " \n" ;
	cout << *(p++) << " \n" ;
	cout << *p-3 << " \n";
	cout << *(p+10) << "\n";
}