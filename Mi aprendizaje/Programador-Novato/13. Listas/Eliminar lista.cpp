#include <iostream>
using namespace std;
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarNodoLista(Nodo *&lista,int dato);
void mostrarNodoLista(Nodo *&lista);
bool buscarNodoLista(Nodo *&lista,int buscar);
bool eliminarNodoLista(Nodo *&lista,int numeroBorrar);
void borrarLista(Nodo *&lista,int &numero);
int main(){
    int dato,numeroEliminar;
    int dato,numeroEliminar,numeroEliminado;
    char respuesta;
    Nodo *lista=NULL;
    regresar:
    cout<<"Ingresa un dato en la lista: ";
    cin>>dato;
    insertarNodoLista(lista,dato);
    cout<<"Deseas insertar otro dato (s/n):";
    cin>>respuesta;
    if(respuesta=='s'  || respuesta=='S'){
        goto regresar;
    }
    mostrarNodoLista(lista);
    /*
    cout<<"Numero a buscar: ";
    cin>>dato;
    if(buscarNodoLista(lista,dato)==true){
        cout<<"El valor "<<dato<<" si esta en la lista\n";
    }
    else{
        cout<<"El valor "<<dato<<" no esta en la lista\n";
    }
    */
    /*
    cout<<"Numero a eliminar:";
    cin>>numeroEliminar;
    if(eliminarNodoLista(lista,numeroEliminar)==true){
        cout<<"El numero "<<numeroEliminar<<" ha sido eliminado de la lista\n";
    }else{
        cout<<"El numero "<<numeroEliminar<<" no ha sido encontrado\n";
    }
    mostrarNodoLista(lista);
   */
    while (lista!=NULL)
    {
        borrarLista(lista,numeroEliminado);
        cout<<"Se elimino "<<numeroEliminado<<"\n";
    }
    mostrarNodoLista(lista);
    system("pause");
    return 0;
}
void insertarNodoLista(Nodo *&lista,int dato){
    Nodo *nuevoNodo=new Nodo();
    nuevoNodo->dato=dato;
    Nodo *aux1=lista;
    Nodo *aux2;
    while ( (aux1!=NULL) && (aux1->dato<dato) ){
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if(lista==aux1){
        lista=nuevoNodo;
        nuevoNodo->siguiente=aux1;
    }else{
        aux2->siguiente=nuevoNodo;
        nuevoNodo->siguiente=aux1;
    }
    cout<<"El dato "<<dato<<" se ha insertado\n";
}
void mostrarNodoLista(Nodo *&lista){
    Nodo *actual=new Nodo();
    actual=lista;
    while (actual!=NULL)
    {
        cout<<"Valor del nodo es "<<actual->dato<<"\n";
        actual=actual->siguiente;
    if(lista!=NULL){
        Nodo *actual=new Nodo();
        actual=lista;
        while (actual!=NULL)
        {
            cout<<"Valor del nodo es "<<actual->dato<<"\n";
            actual=actual->siguiente;
        }
    }
    else{
        cout<<"Esta lista esta vacia\n";
    }

}
bool buscarNodoLista(Nodo *&lista,int buscar){
    bool encontrado=false;
    Nodo *actual=new Nodo();
    actual=lista;
    while ( (actual!=NULL) && (actual->dato<=buscar) )
    {
        if(actual->dato==buscar){
            encontrado=true;
        }
        actual=actual->siguiente;
    }
    return encontrado;
}
bool eliminarNodoLista(Nodo *&lista,int numeroBorrar){
    bool encontrado=false;
    if(lista!=NULL){
        Nodo *aux=lista,*anterior=NULL;
        while ( (aux!=NULL) && (aux->dato!=numeroBorrar) ){
            anterior=aux;
            aux=aux->siguiente;
        }
        if(aux==NULL){
            encontrado=false;
        }else if(anterior==NULL){
            lista=lista->siguiente;
            delete aux;
            encontrado=true;
        }else{
            anterior->siguiente=aux->siguiente;
            delete aux;
            encontrado=true;
        }
    }
    return encontrado;
}
void borrarLista(Nodo *&lista,int &numero){
    if(lista!=NULL){
        Nodo *aux=lista;
        numero=aux->dato;
        lista=aux->siguiente;
        delete aux;
    }
} 