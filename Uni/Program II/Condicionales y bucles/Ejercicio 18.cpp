//* Ejercicio 18

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
int main (){
	
	 char frase[30];
	 int total_v=0;
	 
	 cout<<"Ingrese una frase: ";
	 cin.getline(frase,30,'\n');
	 
	 for(int i=0;i<30;i++){
	 	
	 	switch(frase[i]){
	 		case 'a': total_v++ ; break;
	 		case 'A' :total_v++; break;
	 		case 'e': total_v++ ; break;
	 		case 'E' :total_v++ ; break;
	 		case 'i': total_v++ ; break;
	 		case 'I' :total_v++ ; break;
	 		case 'o': total_v++ ; break;
	 		case 'O' :total_v++ ; break;
	 		case 'u': total_v++ ; break;
	 		case 'U' :total_v++; break;
	 	}
	 }
	 cout<<"El numero total de vocales es: "<<total_v<<endl;
	
	
	getch ();
	return 0;
}
