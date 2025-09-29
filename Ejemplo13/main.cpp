#include <Persona.hpp>

int main(int argc, char **argv)
{
	Persona *p1= new Persona(18,1);
	Persona *p2= new Persona(19,0);
	Persona *p3= new Persona(20,0);
	Persona *p4= new Persona(21,0);
	Persona *p5= new Persona(22,1);
	Persona *p6= new Persona(23,1);
	Persona *p7= new Persona(24,0);
	Persona *p8= new Persona(25,1);
	Persona *p9= new Persona(26,1);
	Persona *p10= new Persona(27,1);
	
	p1->mostrar();
	p2->mostrar();
	p3->mostrar();
	p4->mostrar();
	p5->mostrar();
	p6->mostrar();
	p7->mostrar();
	p8->mostrar();
	p9->mostrar();
	p10->mostrar();
	
	return 0;
}
