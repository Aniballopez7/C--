#include<iostream>
using namespace std; 
void insertarNumero(int& n,int& b); //(int& n) o (int &n) <-parametros por referecia
void sumarReferencia(int& n, int b); //La b no esta por parametros por referencia
void mostrar(int n, int b); //No tienen parametros por referencia
/*TODO: el parametro por referencia lo que hace es guardar el valor de un parametro para ser
utilizado en otra funcion al utilizar ese parametro.

Ejemplo si tu declaras un parametro por referencia -> (int& numero)
y en la varieble numero le asignas el 5, esa variable conservara el 
mismo valor de 5 cuando utilices el parametro (int numero) en 
otra funcion.

*/
int main()
{
    int n,b;
    insertarNumero(n,b);
    sumarReferencia(n,b);
    mostrar(n,b);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void insertarNumero(int& n,int& b)
{
    cout<<"Ingresa un numero: ";cin>>n;
    b = n;
}
void sumarReferencia(int& n,int b)
{
    n += 5;
    b += 5;
}
void mostrar(int n, int b)
{
    cout<<"\nCon referencia: "<<n<<endl;
    cout<<"Sin referencia: "<<b<<endl;
}