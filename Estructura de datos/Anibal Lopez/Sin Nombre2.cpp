/*Realice un procedimiento para calcular el pago hipotecario mensual 
con la siguiente infomación:
1. el costo hipotecario lo ingresa el usuario por teclado
2. la finalización del contrato en años lo ingresa el usuario por teclado
3. La tasa de interés es al 6%
muestre los resultados */

#include <iostream>
using namespace std;

int main(){ 

	float interes, suma, pago, total;
	int ano;
	
	cout<<"Ingrese el monto de la hipoteca: "; cin>>pago;
	cout<<"Ingrese la duracion del contrato en años :";cin>>ano;
	
	for(int i=0;i<ano;i++){
		cout<<"/nAño: "<<i+1;
		cout<<"/nInversion: "<<pago;
		
		for(int i=1;i<=12;i++){
			interes=(pago*0.06);
			pago=pago+interes;
			cout<<"/n Pago mensual: "<<i<<" - "<<pago;
			total+=pago;

		}
		
		
		cout<<"/n Total ganado año"<<i+1<<" = "<<total<<endl;
		
	}
	

	
	return 0;
}
