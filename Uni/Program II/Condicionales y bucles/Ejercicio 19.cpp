//*Ejercicio#19


#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int n=10, x=0, y=1, z=1 ;
	
	for(int i=1;i<=n;i++){
		z = x + y;
		cout<<z<<" ";
		x=y;
		y=z;
       }
	
getch();
	return 0;
}
