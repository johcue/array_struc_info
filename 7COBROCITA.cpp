#include <iostream>
#include <cstdlib>
/* 7.SE REQUIERE UN PROGRAMA QUE DETERMINE CUANTO DEBE PAGAR UNN PACIENTE POR CITA Y EL MONTO TOTAL POR EL TRATAMIENTO*/
using namespace std;
int main(int argc, char** argv) 
{
	int c,t,p;
	cout<<"COBRO POR CONSULTA"<<endl;
	cout<<"Por favor ingrese el numero de la consulta del paciente ";
	cin>>c;
	if(c<=3)
	{
		p=20000;
		t=c*p;
		}
	else if (c<=5)
	{
		p=15000;
		t=((c-3)*p)+60000;
		}
	else if (c<=8)
	{
		p=10000;
		t=((c-5)*p)+90000;
		}
	else if (c>8)
	{
		p=8000;
		t=((c-8)*p)+120000;
		}
	cout<<"El paciente debe pagar por cita "<<p<<" pesos"<<endl;
	cout<<"El costo del tratamiento es "<<t<<" pesos"<<endl;		
	system("pause");
	return 0;
}
