/*
Area de un triangulo
promedio de notas
volumen de una esfera
*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int opc;
    float n1,n2,n3,a,b,h,p,r,v;
    regresar:
    cout<<"*********************"<<endl;
    cout<<"* MENU DEL PROGRAMA *"<<endl;
    cout<<"*********************\n"<<endl;
    cout<<"1. Area de un triangulo"<<endl;
    cout<<"2. Promedio de un alumno"<<endl;
    cout<<"3. Volumen de una esfera"<<endl;
    cout<<"4. Salir\n"<<endl;
    cout<<"Ingrese una opcion: ";cin>>opc;
    system("clear");  
    switch (opc){
        case 1:
            cout<<"************************"<<endl;
            cout<<"* AREA DE UN TRIANGULO *"<<endl;
            cout<<"************************\n"<<endl;
            cout<<"Ingrese la base del triangulo: ";cin>>b;
            cout<<"Ingrese la altura del triangulo: ";cin>>h;
            a = (b * h) / 2; //Formula
            cout<<"\nEl area del triagulo es: "<<a<<endl;
            system("\nread -p '\nPresione Enter para volver al menu...' ...var");
            system("clear");
            goto regresar;
            break;
        case 2:
            cout<<"*************************"<<endl;
            cout<<"* PROMEDIO DE UN ALUMNO *"<<endl;
            cout<<"*************************\n"<<endl;
            cout<<"Las notas son en base a 20\n"<<endl;
            cout<<"Ingrese la nota del 1er corte: ";cin>>n1;
            cout<<"Ingrese la nota del 2do corte: ";cin>>n2;
            cout<<"Ingrese la nota del 3er corte: ";cin>>n3;
            p = (n1 + n2 + n3) / 3; //Formula
            if(p >= 9.5){
                cout<<"\nEl alumno paso la materia"<<endl;
            }else{
                cout<<"\nEl alumno no paso la materia"<<endl;
            }
            cout<<"\nEl promedio del alumno es de: "<<p<<endl;
            system("\nread -p '\nPresione Enter para volver al menu...' var");
            system("clear");
            goto regresar;
            break;
        case 3:
            cout<<"***************************************************"<<endl;
            cout<<"* ¿ Como desea calcular el volumen de su esfera ? *"<<endl;
            cout<<"***************************************************\n"<<endl;
            cout<<"1. Volumen de esfera"<<endl;
            cout<<"2. Volumen de una esfera media"<<endl;
            cout<<"3. Salir\n"<<endl;
            cout<<"Ingrese una opcion: ";cin>>opc;
            system("clear");
            switch (opc){
                case 1:
                    cout<<"*************************"<<endl;
                    cout<<"* VOLUMEN DE UNA ESFERA *"<<endl;
                    cout<<"*************************\n"<<endl;
                    cout<<"Ingrese el radio de la esfera: ";cin>>r;
                    v =  1.33333333 * M_PI * pow(r,3);
                    cout<<"\nEl volumen de la esfera es: "<<v<<endl;
                    system("\nread -p '\nPresione Enter para volver al menu...' var");
                    system("clear");
                    goto regresar;
                    break;
                case 2:
                    cout<<"*******************************"<<endl;
                    cout<<"* VOLUMEN DE UNA MEDIO ESFERA *"<<endl;
                    cout<<"*******************************\n"<<endl;
                    cout<<"Ingrese el radio de la esfera: ";cin>>r;
                    v =  1.33 * M_PI * pow(r,3) / 2;
                    cout<<"\nEl volumen medio de la esfera es: "<<v<<endl;
                    system("\nread -p '\nPresione Enter para volver al menu...' var");
                    system("clear");
                    goto regresar;
                    break;
                case 3:
                    goto regresar;
                    break;
            }//Fin del swift esfera
        case 4:
            system("\nread -p '\nPresione Enter para continuar' var");
            system("clear");
            return 0;
            break;
    } //Fin del swift del menu principal
}
