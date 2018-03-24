#include <iostream>
#include <stdlib.h>
using namespace std;

void compare(float *comp,float a,float b,float c){
	if(a >= b && a >= c){
		if(b >= c){
			comp[0] = a;
			comp[1] = b;
			comp[2] = c;
		}else{
			comp[0] = a;
			comp[1] = c;
			comp[2] = b;
			}
	}
	if(b >= a && b >= c){
		if(a >= c){
			comp[0] = b;
			comp[1] = a;
			comp[2] = c;

		}else{
			comp[0] = b;
			comp[1] = c;
			comp[2] = a;
		}
	}
	if(c >= a && c >= b){
		if(a >= b){
			comp[0] = c;
			comp[1] = a;
			comp[2] = b;
		}else{
			comp[0] = c;
			comp[1] = b;
			comp[2] = a;
		}
	}
}

int main(void){
	int i;
	float a,b,c;
	float comp[3];
	std::cout << "Digite 4 valores \n";
	std::cin >> i >> a >> b >> c;
	std::cout << "Os valores fornecidos foram" << " " << i << " " << a << " " << b << " " << c << "\n\n";
	compare(comp,a,b,c);
	if(i == 1){
		std::cout << comp[2] << "  " << comp[1] << "  " << comp[0] << "\n";
	}
	else if(i == 2){
		std::cout << comp[0] << "  " << comp[1] << "  " << comp[2] << "\n";
	}
	else if(i == 3){
		std::cout << comp[2] << "  " << comp[0] << "  " << comp[1] << "\n";	
	}
	else
		std::cout << "Valor incorreto para o primeiro termo (i)";

}