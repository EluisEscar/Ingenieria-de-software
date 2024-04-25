#include<iostream>
#include"trabajador.h"

//hola este es un commit pal github

using namespace std;

//int main()
{
	int cod;
	string nombre;
	int horasT;
	float tarifaH;
	int horas;
	
	
	cout<<"Ingrese el nombre:";cin>>nombre;
	cout<<"Ingrese el codigo:";cin>>cod;
	cout<<"Ingrese las horas trabajadas:";cin>>horasT;
	cout<<"Ingrese la tarifa por hora:";cin>>tarifaH;
	
	Trabajador trabajador01(cod,nombre,horasT,tarifaH);
	
	cout<<"\n";
	cout<<"Codigo:"<<trabajador01.getCodigo()<<endl;
	cout<<"Nombre:"<<trabajador01.getNombre()<<endl;
	cout<<"Horas trabajadas:"<<trabajador01.getHoras()<<endl;
	cout<<"Costo por hora:"<<trabajador01.getTarifa()<<endl;	
	cout<<"Descuento:"<<trabajador01.descuento()<<endl;
	cout<<"Sueldo bruto:"<<trabajador01.sueldoBruto()<<endl;
	cout<<"Sueldo neto:"<<trabajador01.sueldoNeto()<<endl;
	
	cout<<"\n";
	cout<<"Aumentando horas"<<endl;
	cout<<"Horas aumentada:"<<trabajador01.getHoras()+10<<endl;
	
	
}
