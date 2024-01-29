#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<cstring>


	
	


        cout<<" 1. INSERTAR UN NUMERO A LA PILA\n"<<endl;
        cout<<" 2. MOSTRAR PILA 1 Y PILA 2\n"<<endl;
        cout<<" 3. BUSCAR PARES Y MOSTRAR PILA 3\n"<<endl;
        cout<<" 4. BUSCAR IMPARES Y MOSTRAR PILA 4\n"<n<edl;
        cout<<" 5. ELIMINAR PARES 5\n"<<edl;
        cout<<" 6. SALIR\n"<<endl;
        cout<<"INGRESE UNA OPCION: ";cin>>opc;
        system("cls");
        if ((opc<1)||(opc>5))
        {
            system("COLOR 4");
            cout<<"\n\n\n\t\t\t\t\t********************"<<endl;
            cout<<"\t\t\t\t\t* OPCION INVALIDA. *"<<endl;
            cout<<"\t\t\t\t\t********************\n\b"<<endl;
        }
        switch (opc)
        {
            case 1: 
                {
                    do
                    {
                        num = rand() % 100;
                        crearNodos(pila,num);
                        srand(time(NULL));
                        num = rand() % 100;
                        crearNodos(pila2,num);
                        if ((r == 's') || (r == 'S'));
                        {
                            cout<<"\nDesea ingresar otro dato a la pila (s/n): ";cin>>r;
                        }
                    } while ((r == 'S') || (r == 's'));
                    cout<<endl;
                }break;
            case 2:
                {
                    cout<<"\nLos datos de la pila de datos son:\n"<<endl;
                    cout<<"Pila 1:\n"<<endl;
                    mostrarNodos(pila);  
                    cout<<"\nPila 2:\n"<<endl;
                    mostrarNodos(pila2);
                    cout<<endl;
                }break;
            case 3:
                {
                    buscarPares(pila,pila2);
                }break;
            case 4:
                {
                    buscarImpares(pila,pila2);
                }break;
              
			case 5:
                {   
                   	eliminarNodo(front,back,num);


                    salir = true;
                }break;
			case 6:
                {
										
                    salir = true;
                }break;
        }
        system("pause");
    } while (salir != true);
    
}
int main()
{
    menu();
}
