#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<string.h>

#define N 50
using namespace std;


struct TablaInfo{
	char cadena[N];
	int llave;
};

void crearTabla(TablaInfo[],int);
long traerCadena(char[]);
int insertar(char[],int,TablaInfo[]);
int consultarkey(int,TablaInfo[],int);
void mostrarDatos(int,TablaInfo[]);
int h1(int,int);
int h2(int,int);
int llave(int,int,int);

int main(){
	char cad[N],resp;
	int cantidad,key,x;
	cout<<"Ingrese la cantidad de cadenas a ingresar: ";
	cin>>cantidad;
	
	TablaInfo t[cantidad];
	crearTabla(t,cantidad);
	
	for(int i=0;i<cantidad;i++){
		cout<<"Ingrese la cadena #"<<i+1<<": ";
		fflush(stdin);
		cin.getline(cad,N);
		cout<<"LA LLAVE ES: "<<insertar(cad,cantidad,t)<<endl;
	}
	
	cout<<"\n----CONSULTAS-----"<<endl;
	
	do{
		cout<<"Ingrese la llave de la cadena a consular: ";
		cin>>key;
		x=consultarkey(key,t,cantidad);
		if(x==-1){
			cout<<"\nLA LLAVE REGISTRADA NO ESTA ASOCIADA A NINGUNA CADENA"<<endl;
		}
		else{
			mostrarDatos(x,t);
		}		
		cout<<"Desea realizar otra consulta?(s/n): ";
		cin>>resp;
	}while(resp=='s' or resp=='S');
return 0;
}

void crearTabla(TablaInfo t[],int tam){
	for(int i=0;i<tam;i++){
		t[i].llave=NULL;
		strcpy(t[i].cadena," ");
	}
}

long traerCadena(char cadena[]){
	int longitud=strlen(cadena);
	long suma=0;
	for(int i=0;i<longitud;i++){
		suma+=cadena[i];
	}
	return suma;
}

int insertar(char cad[],int tam,TablaInfo t[]){
	int i=0,j=0,ascii=0;
	bool encontrado=false;
	ascii=traerCadena(cad);
	while(encontrado==false){
		j=llave(ascii,i,tam);
		if(t[j].llave==NULL && strcmp(t[j].cadena," ")==0){
			t[j].llave=j;
			strcpy(t[j].cadena,cad);
			encontrado=true;
			return j;
		}
		else{
			i=i+1;
		}
	}
}


int consultarkey(int k,TablaInfo t[],int tam){
	for(int i=0;i<tam;i++){
		if(t[i].llave==k){
			return i;
		}
	}
	return -1;
}

void mostrarDatos(int pos, TablaInfo t[]){
	cout<<"\nDATOS DE LA CADENA: "<<endl;
	cout<<"CADENA: "<<t[pos].cadena<<endl;
	cout<<"LLAVE: "<<t[pos].llave<<endl<<endl;
}
int h1(int llave,int n)
{
    return llave%n;
}
 
int h2(int llave,int n)
{
    return 1+(llave%(n-1));
}
 
int llave(int key,int i,int n)
{
    return (h1(key,n)+i*h2(key,n))%n;
}