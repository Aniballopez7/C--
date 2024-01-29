/*Realizar una funcion recursiva para calcular la suma de los cuadrados desde 2 hasta N
2+4+6+8+10+.........+N*/
#include<iostream>
using namespace std;

int cuadros(int n){
	int suma = 0;
	if(n == 0){
		 suma = 0;
	}
	 else{
	 	suma = n+cuadros(n-2);
	  
    }
    return suma;
}






int main(){
	int numero;
	cout<<"ingrese un digito: "<<endl;
	cin>>numero;
	
	return 0;
	
	
}
