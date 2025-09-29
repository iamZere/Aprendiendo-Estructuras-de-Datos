#include "Persona.hpp"

Persona::Persona(int edad, int genero)
{
		//EL DNI y el genero se establecen de forma automática
		this ->edad = edad;
		this ->genero = genero;
}

void Persona::mostrar(){cout <<"La persona tiene " <<this->edad<<" y su genero es " <<this->genero<< endl;}
Persona::~Persona()
{
}

