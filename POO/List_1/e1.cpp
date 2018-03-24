#include <iostream>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	float x,y,z,add;
	x = atof(argv[1]);
	y = atof(argv[2]);
	z = atof(argv[3]);
	std::cout << "Os valores fornecidos foram" << " " << x << " " << y <<" " << z << "\n";
	add = y+z;
	if(x == y && x == z)
		std::cout << "É possivel cria um triangulo com esses valores, e ele seria um triangulo Equilatero \n";
	else{
		if(x < add){
			add = x+z;
			if(y < add){
				add = x+y;
				if(z < add){
					if(z == x | z == y | x == y){
						std::cout << "É possivel cria um triangulo com esses valores, e ele seria um triangulo Isosceles \n";
					}
					else{
						std::cout << "É possivel cria um triangulo com esses valores, e ele seria um triangulo Escaleno \n";
					}
				}
				else{
					std::cout << "Não é possivel cria um triangulo com esses valores \n";	
				}
			}
			else{
				std::cout << "Não é possivel cria um triangulo com esses valores \n";
			}
		}	
		else{
			std::cout << "Não é possivel cria um triangulo com esses valores \n";
		}
	}
}