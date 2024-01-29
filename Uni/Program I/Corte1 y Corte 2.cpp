/*Programa para determinar los alumnos reprobados en programacion de la seccion 3T3*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char nombre[18][30];
int cant=18;
float total[18],corte1[18],corte2[18];
	for(int i = 0;i < cant;i++)
	{
		cout<<"\nIngrese el nombre de estudiante: ";cin>>nombre[i]; 
		cout<<"\nIngrese la nota del primer corte (30%): ";cin>>corte1[i];
		cout<<"\nIngrese la nota del segundo corte (30%): ";cin>>corte2[i];
	}
	cout<<"\nLos alumnos reprobados son:"<<endl;
	for(int i=0;i<cant;i++)
	{
		nombre[i];
		total[i] = ((corte1[i] * 0.30) + (corte2[i] * 0.30));
		if(total[i] < 10)
		{	
			cout<<"\n"<<nombre[i]<<" Reprobo la materia con "<<total[i]<<endl;
			
		}
	}
return 0;
}

