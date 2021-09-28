#include <iostream>
#include <stdlib.h>

class Persona{
	private://atributos
		int edad;
		std::string nombre;
	public://metodos
		Persona(int, std::string); //Constructor
		void	leer();
		void	correr();
};

Persona::Persona(int _edad, std::string _nombre)
{
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer()
{
	std::cout << "Soy " <<nombre<< " y estoy leyendo un libro" << std::endl;
}

void Persona::correr()
{
	std::cout << "Soy " <<nombre<< " y estoy corriendo" << std::endl;
}

int main()
{
	Persona p1 = Persona(20, "Carlos");
	Persona p2(19,"Maria");

	p1.leer();
	p2.correr();
	return (0);
}

