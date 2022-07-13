#include <iostream>
#include <cstdlib>
/* 2. REALICE UN PROGRAMA QUE LEA Y E IMPRIMA CRONOLOGICAMENTE (DE MENOR A MAYOR) LOS NOMBRES Y EDADES DE TRES ESTUDIANTES */
using namespace std;                                                                                                                                          
int main(int argc, char** argv) 
{
	int a,b,c;
	string nombre1,nombre2,nombre3;
	cout<<"EDADES Y NOMRES ORDENADOS CRONOLOGICAMENTE"<<endl;
	cout<<"Por favor, Ingrese el nombre y edad respectiva de cada estudiante"<<endl;
	cin>>nombre1>>a;
	cin>>nombre2>>b;
	cin>>nombre3>>c;
	if (a<=b)
	{
     if(a<=c)
        {
		    if(b<=c)
		     {
			   cout<<"Los Nombres organizados son: "<<endl;
			   cout<<"-"<<nombre1<<" con "<<a<<endl;
			   cout<<"-"<<nombre2<<" con "<<b<<endl;
			   cout<<"-"<<nombre3<<" con "<<c<<endl;	   
		     }
		    else
		     {
			   cout<<"Los Nombres organizados son: "<<endl;
			   cout<<"-"<<nombre1<<" con "<<a<<endl;
               cout<<"-"<<nombre3<<" con "<<c<<endl;
               cout<<"-"<<nombre2<<" con "<<b<<endl;
		    }
        }
	}
	else if (b<=a)
	{
     if(b<=c)
        {
           if(a<=c)
             {		 
			   cout<<"Los Nombres organizados son: "<<endl;
			   cout<<"-"<<nombre2<<" con "<<b<<endl;
               cout<<"-"<<nombre1<<" con "<<a<<endl;
			   cout<<"-"<<nombre3<<" con "<<c<<endl;
		      }
		   else
		     {
		       cout<<"Los Nombres organizados son: "<<endl;    
		       cout<<"-"<<nombre2<<" con "<<b<<endl;
			   cout<<"-"<<nombre3<<" con "<<c<<endl;
			   cout<<"-"<<nombre1<<" con "<<a<<endl;
		     }
        }
	}
	else if (c<=b)
	{
      if (c<=a)
        {
		    if(a<=b)
		     {
			    cout<<"Los Nombres organizados son: "<<endl;
				cout<<"-"<<nombre3<<" con "<<c<<endl;
	            cout<<"-"<<nombre1<<" con "<<a<<endl;
	            cout<<"-"<<nombre2<<" con "<<b<<endl;
		     }
		    else
		     {
			    cout<<"Los Nombres organizados son: "<<endl;
				cout<<"-"<<nombre3<<" con "<<c<<endl;
			    cout<<"-"<<nombre2<<" con "<<b<<endl;
			    cout<<"-"<<nombre1<<" con "<<a<<endl;
		     }
        }
	}
	system ("pause");
	return 0;
}
