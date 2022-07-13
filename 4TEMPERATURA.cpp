#include <cstdlib>
#include <iostream>
//4. REALICE UN PROGRAMA QUE ACEPTE UNA ENTRADA CORRESPONDIENTE A UNA TEMPERATURA 
//Y LE ASIGNE UN MENSAJE EN GRADOS FARHENHEIT
using namespace std;
int main(int argc, char *argv[])
{ 
    int t;
    double f;
    cout<<"SENSOR DE TEMPERATURA"<<endl;
    cout<<"Por favor digite la temperatura medida ";
    cin>>t;
    f=(((9/5)*t)+32);
    if(f<=40)
    {
            cout<<"Posible Congelacion"<<endl;
        }
        else
        if(f<=60)
        {
                cout<<"Desagradable"<<endl;
        }
        else
                if (f<=100)
                {
                          cout<<"Normal"<<endl;
                          }
                          else
                          if(f<=120)
                          {
                                   cout<<"Calor Excesivo"<<endl;
                                   }
                                   else
                                   {
                                       cout<<"Peligroso"<<endl;
                                   }
    system("PAUSE");
    return 0;
}
