#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    char nombre[20],nombre2[20],n[10],n2[10];
    
    cout<<"A continuacion va a ingresar 2 nombres y se determinara si son iguales o no\n"<<endl;
    cout<<"aparecera true en caso de que la primera o la ultima letra de ambos nombres sean iguales\n"<<endl;
    cout<<"caso contrario aparecera false\n"<<endl;
    cout<<"Ingrese un nombre: ";cin.getline(nombre,20,'\n');
    cout<<"Ingrese otro nombre: ";cin.getline(nombre2,20,'\n');
	if(strcmp(nombre,nombre2)==0){
		cout<<"\nLos nombres son iguales\n"<<endl;
		return 0;
	}
	//Copiando cadenas
    strcpy(n,nombre);
    strcpy(n2,nombre2);
    //Invirtiendo cadenas
    strrev(n);
    strrev(n2);
    if((n[0]==n2[0])||(nombre[0]==nombre2[0])){
    	cout<<"\ntrue\n"<<endl;
	}
	else{
		cout<<"\nfalse\n"<<endl;
	}
    system("pause");
    return 0;
}
