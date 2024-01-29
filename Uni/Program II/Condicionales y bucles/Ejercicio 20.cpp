//*Ejercicio20

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n, fact=1;
	
	cout<<"Ingrese un digito: ";cin>>n;
	
	for (int i=1; i<=n; i++){
		fact = fact * i;
	}
	
	cout<<"Su factorial es: "<<fact<<endl;
	
	getch();
	return 0;
}
