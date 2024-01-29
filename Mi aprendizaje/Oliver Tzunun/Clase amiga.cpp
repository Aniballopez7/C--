#include<iostream>
using namespace std;
class Documento
{
    private:
        string titulo;
        string contenido;
        int numero;
    public:
        Documento(string _titulo,string _contenido,int _numero)
        {
            titulo = _titulo;
            contenido = _contenido;
            numero = _numero;
        }
        //Metodo friend
        friend class Impresora;
};
class Impresora
{
    public:
        void imprimir()
        {
            Documento d1 = Documento("Clase amiga","Permite acceder a lo privado",2);
            cout<<d1.titulo<<endl;
            cout<<d1.contenido<<endl;
            cout<<d1.numero<<endl;
        }
};
int main()
{
    Impresora epson;
    epson.imprimir();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}