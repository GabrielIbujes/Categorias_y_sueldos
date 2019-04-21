#include<iostream>
using namespace std;
int main(){
	
	float Sueldo,Nuevo_Sueldo=0;
	int Categoria;
	cout<<"Ejercicio de sueldos de acuerdo a sus categorias";
    cout<<endl;
	cout<<"Ingrese su sueldo básico: ";
	cin>>Sueldo;
	cout<<"Ingrese su categoria: ";
	cin>>Categoria;
	
	switch(Categoria){
		case 1:
			Nuevo_Sueldo = Sueldo + (Sueldo * 0.15);
		break;
		case 2:
			Nuevo_Sueldo = Sueldo + (Sueldo * 0.10);
		break;
		case 3:
			Nuevo_Sueldo = Sueldo + (Sueldo * 0.08);
		break;
		case 4:
			Nuevo_Sueldo = Sueldo + (Sueldo * 0.07);
		break;
		default:
			cout<<"Categoria erronea, ingresa de nuevo "<<endl;
		break;
	}	
	
	cout<<"La categoria en la que se encuentra es: "<<cat<<endl;
	cout<<"El sueldo pasado fue de: "<<Sueldo<<"$"<<endl;
	cout<<"Su nuevo sueldo es: "<<Nuevo_Sueldo<<"$"<<endl;

	return 0;	
}