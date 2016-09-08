/**
Nombre: Daniel Manzano Saturnino
*/

#include "Palindromo.h"
/**
Llenar pila
paraments: Recibe una cadena de caracteres
Result: void
recibe una cadena la recorre con el metodo 
push insertamos un elemento a la pila, 
lo que vamos a meter es el primer elemento 
de la cadena y se hara este procedimiento 
hasta el ultimo elemento de la cadena
*/
void Palindromo::llenarPila(std::string s1)
{
	for (int i = 0; i < s1.length(); ++i)
	{
		this->pila.push(s1.at(i));
	}
}

/**
Llenar cola
paraments: Recibe una cadena de caracteres
Result: void
recibe una cadena la recorre con el metodo 
push insertamos un elemento a la cola, 
lo que vamos a meter es el primer elemento 
de la cadena y se hara este procedimiento 
hasta el ultimo elemento de la cadena*/
void Palindromo::llenarCola(std::string s1)
{
	for(int i=0; i<s1.length();++i)
	{
		this->cola.push(s1.at(i));
	}
}
/**
Comparar
paraments: void
Result: void
Recorre con un for la pila y la cola 
y pregunta si el ultimo de la pila es igual al 
primero de la cola si es asi elimina el ultimo 
elemento de la pila y el primero de la cola 
entra a una segunda condicion que dira si la pila 
y la cola estan vacias si esto se cumple es un palindromo
si no sigue iterando entrando al primer if si no se cumple 
lo del primer if decimos que no es palindromo
*/
void Palindromo::Comparar()
{
	for(int i=0;i<this->pila.size();i--)
	{
		if(this->pila.top()==this->cola.front())
		{
				this->pila.pop();
				this->cola.pop();
			if(!pila.empty()&&!cola.empty())
			{
				std::cout<<"Es palindromo felicidades :D"<<std::endl;
			}
		}
		else
		{
			std::cout<<"No es palindromo"<<std::endl;
		}
	}
	
}

