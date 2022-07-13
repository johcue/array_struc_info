//ARRAYS de ESTRUCTURAS
//ARRAYS de ESTRUCTURAS
//ARRAYS de ESTRUCTURAS

#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <conio.h>


#define MAXIMO 20

using namespace std;

struct fecha{
	int dd;
	int mm;
	int aa;
};

struct registro{
	long long codigo;
	char nombre[31];
	char direccion[31];
	char telefono[12];
	fecha fecha_nac;
	int estrato;
	double matricula;
	double nota;
};

/*Ingresar los Datos*/
int entra_datos(registro v[])
{
	char resp;
	int i=0;
	do{
		system("cls");
		cout<<endl<<endl;
		cout<<"\t REGISTRO DE DATOS "<<endl;
		cout<<"Por favor, ingrese los siguientes datos para el registro"<<endl;
		cout<<"-Nombre: "; cin>> v[i].nombre;
		cout<<"-Codigo: "; cin>> v[i].codigo;
		cout<<"-Direccion: "; cin>> v[i].direccion;
		fflush(stdin);
		cout<<"-Telefono: "; cin>> v[i].telefono;
		cout<<"-Fecha de Nacimiento (dd/mm/aa): ";
		cin>> v[i].fecha_nac.dd>> v[i].fecha_nac.mm>> v[i].fecha_nac.aa;
		cout<<"-Estrato: "; cin>> v[i].estrato;
		cout<<"-Matricula: "; cin>> v[i].matricula;
		cout<<"-Nota: "; cin>> v[i].nota;
		i++;
		cout<<"Desea continuar? s/n ";
		resp=toupper(getch());
	}while(resp=='S');
	return(i);
}

/*Reporte de Datos*/
double listar(registro v[], int n)
{
	cout<<"\n LISTADO DE ALUMNOS \n"<<endl;
	for(int i=0; i<n; i++)
	{
		printf("%2d %1011d %-30s %3.1f\n", i+1, v[i].codigo, v[i].nombre, v[i].nota );//%2d %1011d %-30s %3.1f DISTANCIA ENTTRE LOS NOMBRES
	}
}//listar

/*Muestra Los Datos de un Registro*/
void mostrar(registro r)
{
	cout<<endl<<endl;
	cout<<"\t DATOS ENCONTRADOS"<<endl;
	cout<<"-Codigo: "<<r.codigo<<endl;
	cout<<"-Nombre: "<<r.nombre<<endl;
	cout<<"-Direccion: "<<r.direccion<<endl;
	cout<<"-Telefono: "<<r.telefono<<endl;
	cout<<"-Fecha de Nacimiento (dd/mm/aa): ";
	printf("%02d/%02d%/%4d \n", r.fecha_nac.dd, r.fecha_nac.mm,r.fecha_nac.aa);
	cout<<"-Estrato: "<<r.estrato<<endl;
	cout<<"-Matricula: "<<r.matricula<<endl;
	cout<<"-Nota: "<<r.nota<<endl;
}//mostrar

/*Consulta dedatos por Codigo*/
void consultar(registro v[], int n)
{
	bool hallado=false;
	long long clave;
	cout<<"Codigo a Buscar: ";
	cin>>clave;
	for(int i=0; i<n;i++)
	{
		if(clave==v[i].codigo)
		{
			hallado=true;
			mostrar(v[i]);
		}
	}	
		if(!hallado)
		{
			cout<<"Codigo no encontrado"<<endl;
			}
		getch();
}
/*COSO PRINCIPAL*/
using namespace std;
int main(int argc, char** argv) 
{
	registro alumno[MAXIMO];
	int n;
	n=entra_datos(alumno);
	listar(alumno, n);
	consultar(alumno, n);
	
	
	system("pause");
	return 0;
}	
