/**
Nombre: Daniel Manzano Saturnino
main
*/
#include "Palindromo.h"
int main(){

	Palindromo p=Palindromo();
	std::cout<<"Escribeme una cadena sin espacios y te dire si es palindromo:"<<std::endl;
	std::cin>>p.s1;
	p.llenarPila(p.s1);
	p.llenarCola(p.s1);
	p.Comparar();
}