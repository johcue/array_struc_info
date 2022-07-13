#include <cstdlib>
#include <iostream>
//3. REALICE UN PROGRAMA QUE PERMITA DETERMINAR EL PRESUPUESTO
// QUE SE DEBE PRESENTAR A LOS CLIENTES QUE DESEEN REALIZAR UN EVENTO
using namespace std;
int main(int argc, char *argv[])
{
    int p,d,c;
    cout<<"PRESUPUESTO PARA BAQNUETES"<<endl;
    cout<<"Por favor digite la cantidad de personas ";
    cin>>p;
     if (p>300)
	{
		c=18000;
        d=p*c;
		cout<<"Cada plato tiene un costo de $"<<c<<endl;
        cout<<"Y, por "<<p<<" personas, debe tener un presupuesto de $"<<d<<endl;
	}
     else if (p>200)
    {
        
           c=20000;
	       d=p*c;
   	       cout<<"Cada plato tiene un costo de $"<<c<<endl;
           cout<<"Y, por "<<p<<" personas, debe tener un presupuesto de $"<<d<<endl;   
	} 
    else
    if(p<200)   
    {
    	c=25000;
        d=p*c;
    	cout<<"Cada plato tiene un costo de $"<<c<<endl;
        cout<<"Y, por "<<p<<" personas, debe tener un presupuesto de $"<<d<<endl;
	}           
    system("pause");
    return 0;
}
