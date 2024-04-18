#include<iostream>
using namespace std;

class Trabajador{
	private:
		int codigo;
		string nomApe;
		int horasTrabajadas;
		float tarifaHora;
	public:
		Trabajador(int cod,string nApe,int horasT,float tarifaH)
		{
			codigo = cod;	
			nomApe = nApe;
			horasTrabajadas = horasT;
			tarifaHora = tarifaH;
		}	
	//Get
	int getCodigo()
	{
		return codigo;
	}
	string getNombre()
	{
		return nomApe;
	}
	int getHoras()
	{
		return horasTrabajadas;
	}
	int getTarifa()
	{
		return tarifaHora;
	}
	//Métodos
	float sueldoBruto()
	{
		return horasTrabajadas*tarifaHora;
	}
	float descuento()
	{
		return 0.15*sueldoBruto();
	}
	float sueldoNeto()
	{
		return sueldoBruto()-descuento();
	}
};
