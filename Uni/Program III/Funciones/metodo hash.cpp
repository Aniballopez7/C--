#include<iostream>
using namespace std; 
struct Alumno
{
    char nombre[40];
    int nota;
    int estado = 0;
    int clave;
};

int insertar(Alumno* A,Alumno* B,int,int);
int buscaHash(Alumno* A,int,int);
int main()
{
    int opc = 0,n,clave,x;
    do
    {
        cout<<"Ingresa la cantidad de alumnos: ";cin>>n;
    } while (n<=0);
    Alumno* A = new Alumno[n];
    Alumno* B = new Alumno[n];
    system("clear");
    do
    {
        cout<<"\tMenu"<<endl;
        cout<<"1. Insertar"<<endl;
        cout<<"2. Buscar"<<endl;
        cout<<"3. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        system("clear");
        switch (opc)
        {
            case 1:
                for (int i = 0; i < n; i++)
                {
                    cout<<"Datos del alumno:\n"<<endl;
                    fflush(stdin);
                    cout<<"Alumno "<<i+1<<"\n"<<endl;
                    cout<<"Nombre: ";cin.getline(A[i].nombre,40,'\n');
                    do
                    {
                        cout<<"Nota: ";cin>>A[i].nota;
                    } while ((A[i].nota<0)||(A[i].nota>20));
                    A[i].clave = insertar(A,B,i,n);
                    cout<<"Clave: ";
                    cout<<A[i].clave<<endl;
                }
                break; 
            
            case 2:
                cout<<"Introduzca el codigo que desea buscar: ";
                fflush(stdin);
                cin>>clave;
                x = buscaHash(A,n,clave);
                if (x == -1)
                {
                    cout<<"Numero no encontrado"<<endl;
                }
                else
                {
                    cout<<"Numero encontrado"<<endl;
                    cout<<"Nombre: "<<B[x].nombre<<endl;
                    cout<<"Nota: "<<B[x].nota<<endl;
                }
                break;
            case 3:
                return 0;
        }
    } while (/* condition */);
    
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
int insertar(Alumno* A,Alumno* B,int i,int n)
{
    int j = (A[i].nota + 1) % n;
    do
    {
        if (A[j].estado == 0)
        {
            B[j] = A[j];
            A[j].estado = 1;
        }
        
    } while (j > n);
    return j;
}
int buscarHash(Alumno *A,int n,int clave)
{
    int j=0;
    while (j < n)
    {
        if (A[j].clave == clave)
        {
            return j;
        }
        else
        {
            j++;
        }
        
    }
    return -1;
}