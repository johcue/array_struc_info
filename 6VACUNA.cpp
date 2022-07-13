#include <iostream>
#include <cstdlib>
/*6. REALICE UN PROGRAMA QUE PERMITA DETERMINAR QUE TIPO DE VACUNA (A,B O C) DEBE APLICAR
A UNA PERSONA, CONSIDERANDO SU EDAD Y EL SEXO */
using namespace std;
int main(int argc, char** argv) 
{
	int e,s;
	cout<<"DESIGNACION DE VACUNAS SEGUN EL USURIO"<<endl;
    cout<<"Por favor Ingrese la edad del usuario ";
    cin>>e;
    cout<<"Por favor Seleccione el valor de sexo del usuario"<<endl;
    cout<<"\t Precione 1 para MUJER"<<endl;
    cout<<"\t Precione 2 para HOMBRE"<<endl;
    cout<<"\t: ";
    cin>>s;
    if(e>=70)
     {
	 cout<<"Se debe administrar la vacuna C"<<endl;
	 }
	 else if(e>=16)
     { 
	     if(e<69)
         {
     	    if(s==1)
             {
		       cout<<"Se debe administrar la vacuna B"<<endl;
		     }
             else 
             {
     	        cout<<"Se debe administrar la vacuna A"<<endl;
	         }
	     }
	 }
     else if(e<16)
     {
	   cout<<"Se debe administrar la vacuna A"<<endl;
		}
    cout<<endl;
    system ("pause");
    return 0;
}

