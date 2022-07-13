#include <iostream>
#include <cstdlib>
#include <math.h>
/* 5.REALICE UN PROGRAMA PARA DETERMINAR EL DESCUENTO QUE TENDRA UN ARTICULO */
using namespace std;
int main(int argc, char** argv) 
{
	int c;
	double d,p;
	cout<<"COSTO Y DESCUENTO DE UN ARTICULO"<<endl;
	cout<<"Por favor ingrese el costo de su articulo ";
	cin>>c;
	if (c>=20000)
	{
	    p=(c-((c*15)/(100)));
		cout<<"Su articulo tiene un costo igual $"<<p<<endl;	
	}
	else if (c>10000)
	{
	    p=(c-((c*12)/(100)));
   		cout<<"Su articulo tiene un costo igual $"<<p<<endl;	
	}
	else if (c<1000)
	{
		p=(c-((c*10)/(100)));
		cout<<"Su articulo tiene un costo igual $"<<p<<endl;	
		
	}
	system ("pause");
	return 0;
}
