/**
NOMBRE: Daniel Manzano Saturnino
Descripicion: Este programa verifica
si una cadena de caracteres es un 
palindromo 
*/
#include <iostream>
#include <stack>
#include <queue>
#include <string>
class Palindromo{
public:
	std::stack<char> pila;
	std::queue<char> cola;
	std::string s1;
public:
 	void llenarPila(std::string s1);
 	void llenarCola(std::string s1);
 	void Comparar();
 	
};