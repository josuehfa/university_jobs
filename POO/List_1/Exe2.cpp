#include <iostream>
#include <stdlib.h>
using namespace std;

float compare(float a,float b,float c){
	float comp[3];
	cout << a << b << c << "Valores \n";
	if(a > b){
		if(a > c){
			if(b > c){

				comp[0] = a;
				comp[1] = b;
				comp[2] = c;
			}
			else{
				comp[0] = a;
				comp[1] = c;
				comp[2] = b;
			}
		}
		else
			return 0;
	}
	else
		return 0;
	cout << comp << "\n";
	return (comp[3]);
}

int main(){
	int i;
	float a,b,c;
	float comp[3];
	std::cout << "Digite 4 valores \n";
	std::cin >> i >> a >> b >> c;
	std::cout << "Os valores fornecidos foram" << " " << i << " " << a << " " << b << " " << c << "\n";
	if(compare(a,b,c) == 0)
		if(compare(b,a,c) == 0)
			comp = compare(c,a,b);
		else
			comp = compare(b,a,c);
	else
		comp[3] = compare(a,b,c);
	cout << comp[0] << comp[1] << comp[2] << "\n";
	if(i == 1){
		std::cout << comp[0] << "  " << comp[1] << "  " << comp[2] << "\n";
	}
	else if(i == 2){
		std::cout << comp[2] << "  " << comp[1] << "  " << comp[0] << "\n";
	}
	else if(i == 3){
		std::cout << comp[1] << "  " << comp[0] << "  " << comp[2] << "\n";	
	}
	else
		std::cout << "Valor incorreto para o primeiro termo (i)";

}