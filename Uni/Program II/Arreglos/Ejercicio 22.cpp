#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){

    float nota,notas[20],s=0,cont=0,contT=0,z=1,promedio=0,Porcentaje=0;
    char r;
    do
    {
        cout<<"Desea analizar las calificaciones de un alumno (S) ?: ";cin>>r;
        cout<<"\n";
        if (r != 'S'){
			for (int i = 0; i < 1; i++){
            do{
                cout<<"Ingrese la nota del alumno "<<"["<<z++<<"]"<<": ";cin>>notas[i];
                nota = notas[i];
                if((nota < 0)||(nota > 10)){
                	cout<<"\nIngrese un numero valido\n"<<endl;
                	z--;
				}
            }while ((nota < 0)||(nota > 10));
            cout<<"\n";
            contT++;
            if (notas[i] > 4)
            {
                s += notas[i];
                cont++;
            }
        	}
            Porcentaje= (cont/contT)*100; 
            promedio = s/cont;
            //Si ningun alumno aprueba
            if(cont<=0){
            	if(contT==1){ //Si solo se ingrese una nota
            		cout<<"Este alumno no aprobo"<<endl;
            		return 0;
				}
            	cout<<"De "<<contT<<" alumnos ninguno aprobo"<<endl;
				return 0; 
			}
			//Si solo se ingresa una sola nota, un solo alumno y este aprueba 
			if((cont==1)&&(contT==1)){
				cout<<"Este alumno aprobo"<<endl;
				return 0;
			}
			//Si solo aprueba un alumno
        	if(cont==1){
        		cout<<"De "<<contT<<" alumnos solo aprobo un alumno"<<endl;
        		return 0;
			}	
			//Si mas de un alumno aprueba
			if((cont>1)&&(cont<contT)){
				cout<<"El "<<Porcentaje<<"%"<<" de los alumnos aprobo"<<endl;
            	cout<<"El promedio de los alumnos aprobados es: "<<promedio<<endl;
            	cout<<"De "<<contT<<" alumnos aprobaron "<<cont<<" alumnos"<<endl;
            	return 0;
			}
			//Si todos los alumnos aprueban
            if(cont==contT){
        		cout<<"El "<<Porcentaje<<"%"<<" de los alumnos aprobo"<<endl;
        		cout<<"El promedio de los alumnos aprobados es: "<<promedio<<endl;
        		return 0;
			}
        }
        
    } while (r == 'S');
    cout<<"\n";
    system("pause");
    return 0;
}
