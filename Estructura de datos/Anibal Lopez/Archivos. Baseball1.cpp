/*
Se requiere hacer una clasificaci�n de un grupo de 50 beisbolistas, de manera que a partir de sus estad�sticas y tomando en cuenta ciertos criterios, 
produzcamos una lista donde aparezcan en orden de calidad los mencionados deportistas. Sobre cada jugador se conoce la siguiente informaci�n: nombre, 
fecha de nacimiento, pa�s de origen, peso (kg), estatura (mts), si batea a la derecha o a la izquierda, si lanza a la derecha o la zurda,
equipo en el que juega en las grandes ligas y posici�n habitual en el campo. Adem�s, si el jugador es "pitcher" se proporcionar�n las siguientes estad�sticas:
Entradas lanzadas (IP), bases por bolas concedidas (BB), ponchados (K), carreras limpias permitidas (CL), Juegos ganados (G) y juegos perdidos (P).
Si el jugador no es pitcher (solo interesa el bateo), se proporcionar�n los siguientes datos: Veces al bate (VB), hits (H), jonrones (HR), triples (3H), 
dobles (2H), Carreras anotadas (CA), Carreras impulsadas (CI) y bases robadas (BR). Se desee que ustedes creen un programa en C++ que permita 
almacenar dicha informaci�n, con l finalidad de obtener una lista de los mejores jugadores (Bateadores y Pitchers) del grupo de los 50.
PROMEDIO DE BATEO:   H / VB  * 100
EFECTIVIDAD DE PITCHER:   CL  *  9  / IP 
*/
#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
const int tamanio =50;
struct NodoJugadores
{
	string cod,nom,nac,pais,batea,lanza,equipo,posicion;
	float peso,estatura,IP,BB,K,CL,G,P,VB,H,HR,tripleH,dobleH,CA,CI,BR,pro_bateo,efec_pit;
	NodoJugadores *sig;
};

struct DATOS_JUGADOR{
	string cod,nom,nac,pais,batea,lanza,equipo,posicion;
	float peso,estatura,IP,BB,K,CL,G,P,VB,H,HR,tripleH,dobleH,CA,CI,BR,pro_bateo=0,efec_pit=0;

void calc_pro_bateo(){
	pro_bateo=H/(VB*100);
}

void calc_efec_pit(){
	efec_pit=(CL*9)/IP;
}
};
NodoJugadores *listaJugador = NULL;
int menu(){
	int op;
	system("cls");
	cout<<"\t\t\t\t\t**************************\n";
	cout<<"\t\t\t\t\t**** MENU DE OPCIONES ****\n";
	cout<<"\t\t\t\t\t**************************\n\n";
	cout<<"1. Registrar jugadores\n";
	cout<<"2. Mostrar listado de todos los jugadores\n";
	cout<<"3. Mostrar listado de mejores jugadores\n";
	cout<<"4. Buscar jugador\n";
	cout<<"5. Borrar jugador\n";
	cout<<"6. Salir\n";
	cout<<"Ingrese una opcion: ";
	cin>>op;
return op;
}
void insertarJugador(NodoJugadores *&listaJugador,string cod,string nom,string nac, string pais,string batea,string lanza, string equipo, string posicion,float peso, float estatura, float IP, float BB, float K,float CL,float G,float P,float VB,float H,float HR,float tripleH,float dobleH,float CA,float CI, float BR, float pro_bateo,float efec_pit)
{
	NodoJugadores *listaJugadores = new NodoJugadores();
	listaJugadores = listaJugador;
	NodoJugadores *aux = listaJugador;
    NodoJugadores *aux2;
    while (aux != NULL)
    {
        aux2 = aux;
        aux = aux->sig;
    }
    if (listaJugador == aux)
    {
        listaJugador = listaJugadores;
        listaJugadores->sig = aux;
    }
    else
    {
        aux2->sig = listaJugadores;
        listaJugadores->sig = aux;
    }
	cout<<"\nSe registro el jugador correctamente\n"<<endl;
}
void registrar(ofstream &f){
	system("cls");
	string cod,nom,nac,pais,batea,lanza,equipo,posicion;
	float peso,estatura,IP,BB,K,CL,G,P,VB,H,HR,tripleH,dobleH,CA,CI,BR,pro_bateo = 0,efec_pit = 0;
	f.open("datos.txt",ios::out|ios::app);
	cout<<"Codigo :#";
	cin>>cod;
	cout<<"Nombre : ";
	cin>>nom;
	cout<<"Fecha de nacimiento (DD-MM-AA): ";
	cin>>nac;
	cout<<"Pais de origen: ";
	cin>>pais;
	cout<<"Peso del jugador (Kg): ";
	cin>>peso;
	cout<<"Estatura del jugador (Mts): ";
	cin>>estatura;
	cout<<"Mano habil al batear del jugador: ";
	cin>>batea;
	cout<<"Mano habil al lanzar del jugador: ";
	cin>>lanza;
	cout<<"Equipo de grandes ligas en el cual juega: ";
	cin>>equipo;
	cout<<"Posici�n habitual en el campo?: ";
	cin>>posicion;
	string key = "pitcher";
if(posicion.compare(key) == 0)
{
	cout<<"Cuantas entradas ha lanzado?: ";
	cin >> IP;
	cout<<"Cuantas bases por bola ha concedido?: ";
	cin >> BB;
	cout<<"Cuantos bateadores ha ponchado?: ";
	cin >> K;
	cout<<"Cuantas carreras limpias ha permitido?: ";
	cin >> CL;
	cout<<"Cuantos juegos ha ganado?: ";
	cin >> G;
	cout<<"Cuantos juegos ha perdido?: ";
	cin >> P;
}
else{
cout<<"Cuantas veces el jugador ha estado al bate?: ";
cin >> VB;
cout<<"Cuantas hits ha logrado el jugador?: ";
cin >> H;
cout<<"Cuantos jonrones ha logrado el jugador?: ";
cin >> HR;
cout<<"Cuantas triples ha logrado el jugador?: ";
cin >> tripleH;
cout<<"Cuantos dobles ha logrado el jugador?: ";
cin >> dobleH;
cout<<"Cuantos carreras ha anotado el jugador?: ";
cin >> CA;
cout<<"Cuantas impulsadas ha logrado el jugador?: ";
cin >> CI;
cout<<"Cuantos bases ha robado el jugador?: ";
cin >> BR;
}
cout << cod<<" "<<" "<<nom << " " << nac << " " << pais <<" "<<peso<<" "<<estatura<<" "<<batea<<" "<<lanza<<" "<<equipo<<" "<<posicion<<" "<<IP<<" "<<BB<<" "<<K<<" "<<CL<<" "<<G<<" "<<P<<" "<<VB<<" "<<H<<" "<<HR<<" "<<tripleH<<" "<<dobleH<<" "<<CA<<" "<<CI<<" "<<BR<<"\n";
cout <<"REGISTRADOS EXITOSAMENTE...\n";
insertarJugador(listaJugador,cod,nom,nac, pais,batea,lanza, equipo, posicion, peso,  estatura,  IP,  BB,  K, CL, G, P, VB, H, HR, tripleH, dobleH, CA, CI,  BR,  pro_bateo, efec_pit);
f.close();
getch();}
void mostrar(ifstream &f) {
string nom,nac,pais,cod,peso,estatura,batea,lanza,equipo,posicion,IP,BB,K,CL,G,P,VB,H,HR,tripleH,dobleH,CA,CI,BR,pitcher;
system("cls");

f.open("datos.txt",ios::in);
f >> cod;
while(!f.eof()) {
cout << "\nCODIGO: " << cod << endl;
f >> nom;
cout << "NOMBRE: " << nom << endl;
f >> nac;
cout << "FECHA DE NACIMENTO: " << nac << endl;
f >> pais;
cout << "PAIS DE ORIGEN: " << pais << endl;
f >> peso;
cout << "PESO: " << peso << endl;
f >> estatura;
cout << "ESTATURA: " << estatura << endl;
f >> batea;cout << "BATEA CON LA MANO: " << batea << endl;
f >> lanza;
cout << "LANZA CON LA MANO: " << lanza << endl;
f >> equipo;
cout << "EQUIPO: " << equipo << endl;
f >> posicion;
cout << "POSICION: " << posicion << endl;
string key = "pitcher";
if(posicion.compare(key) == 0){
f >> IP;
cout << "ENTRADAS LANZADAS: " <<IP << endl;
f >> BB;
cout << "BASES POR BOLA CONCEDIDOS: " << BB << endl;
f >> K;
cout << "BATEADORES PONCHADOS: " << K << endl;
f >> CL;
cout << "CARRERAS LIMPIAS PERMITIDAS: " << CL << endl;
f >> G;
cout << "JUEGOS GANADOS: " << G << endl;
f >> P;
cout << "JUEGOS PERDIDOS: " << P << endl;
f >> cod;
}else{
f >>VB;
cout << "VECES AL BATE: " << VB << endl;
f >> H;
cout << "HITS: " << H << endl;
f >> HR;
cout << "JONRONES: " << HR << endl;
f >> tripleH;
cout << "TRIPLES LOGRADOS: " << tripleH << endl;
f >> dobleH;
cout << "DOBLES LOGRADOS: " << dobleH << endl;
f >> CA;
cout << "CARRERAS ANOTADAS: " << CA << endl;
f >> CI;
cout << "IMPULSADAS LOGRADAS: " << CI << endl;
f >> BR;
cout << "BASES ROBADAS: \n" << BR << endl;
f >> cod;
}
}
f.close();
getch();
}void buscar(ifstream &f) {
string
nom,nac,pais,codi,codib,peso,estatura,batea,lanza,equipo,posicion,IP,BB,K,CL,G,
P,VB,H,HR,tripleH,dobleH,CA,CI,BR,pitcher;
system("cls");
bool esta=false;
f.open("datos.txt",ios::in);
cout << "Ingrese el c�digo del jugador a buscar : ";
cin >> codib;
f >> codi;
while(!f.eof()) {
if(codi == codib) {
cout<<"CODIGO : " << codi << endl;
f >> nom;
cout << "NOMBRE : " << nom << endl;
f >> nac;
cout << "FECHA DE NACIMIENTO : " << nac << endl;
f >> pais;
cout << "PAIS DE ORIGEN: " << pais << endl;
f >> peso;
cout << "PESO: " << peso << endl;
f >> estatura;
cout << "ESTATURA: " << estatura << endl;f >> batea;
cout << "BATEA CON LA MANO: " << batea << endl;
f >> lanza;
cout << "LANZA CON LA MANO: " << lanza << endl;
f >> equipo;
cout << "EQUIPO: " << equipo << endl;
f >> posicion;
cout << "POSICION: " << posicion << endl;
string key = "pitcher";
if(posicion.compare(key) == 0){
f >> IP;
cout << "ENTRADAS LANZADAS: " <<IP << endl;
f >> BB;
cout << "BASES POR BOLA CONCEDIDOS: " << BB <<
endl;
f >> K;
cout << "BATEADORES PONCHADOS: " << K << endl;
f >> CL;
cout << "CARRERAS LIMPIAS PERMITIDAS: " << CL <<
endl;
f >> G;
cout << "JUEGOS GANADOS: " << G << endl;
f >> P;cout << "JUEGOS PERDIDOS: " << P << endl;
f >> codi;
}
else{
f >>VB;
cout << "VECES AL BATE: " << VB << endl;
f >> H;
cout << "HITS: " << H << endl;
f >> HR;
cout << "JONRONES: " << HR << endl;
f >> tripleH;
cout << "TRIPLES LOGRADOS: " << tripleH << endl;
f >> dobleH;
cout << "DOBLES LOGRADOS: " << dobleH << endl;
f >> CA;
cout << "CARRERAS ANOTADAS: " << CA << endl;
f >> CI;
cout << "IMPULSADAS LOGRADAS: " << CI << endl;
f >> BR;
cout << "BASES ROBADAS: " << BR << endl;
f >> codi;
}
esta = true;break;
}
f >> codi;
}
if(!esta)
cout << "Este jugador no est� registrado\n";
getch();
}
void borrar(ifstream &f) {
system("cls");
string
nom,nac,pais,codi,codib,peso,estatura,batea,lanza,equipo,posicion,IP,BB,K,CL,G,
P,VB,H,HR,tripleH,dobleH,CA,CI,BR,pitcher,nom2,nac2,pais2,codi2,peso2,estatura2,
batea2,lanza2,equipo2,posicion2,IP2,BB2,K2,CL2,G2,P2,VB2,H2,HR2,tripleH2,
dobleH2,CA2,CI2,BR2,pitcher2;
f.open("datos.txt",ios::in);
ofstream faux("temp.txt",ios::out);
if(f.is_open()) {
cout << "CODIGO: ";
cin >> codi2;
f >> codi;
while(!f.eof()) {if (codi == codi2) {
f >> nom;
f>>nac;
f>>pais;
f>>codi;
f>>peso;
f>>estatura;
f>>batea;
f>>lanza;
f>>equipo;
f>>posicion;
f>>IP;
f>>BB;
f>>K;
f>>CL;
f>>G;
f>>P;
f>>VB;
f>>H;
f>>HR;
f>>tripleH;
f>>dobleH;
f>>CA;f>>CI;
f>>BR;
f>>pitcher;
cout <<"REGISTRO ELIMINADO EXITOSAMENTE...\n";
getch();
} else {
faux << codi << " ";
f >> nom;
faux << nom << " ";
f >> nac;
faux << nac << " ";
f >> peso;
faux << peso << " ";
f >> estatura;
faux << estatura << " ";
f >> batea;
faux << batea << " ";
f >> lanza;
faux << lanza << " ";
f >> equipo;
faux << equipo << " ";
f >> posicion;
faux << posicion << " ";f >> IP;
faux << IP << " ";
f >> BB;
faux << BB << " ";
f >> K;
faux << K << " ";
f >> CL;
faux << CL << " ";
f >> G;
faux << G << " ";
f >> P;
faux << P << " ";
f >> VB;
faux << VB << " ";
f >> H;
faux << H << " ";
f >> HR;
faux << HR << " ";
f >> tripleH;
faux << tripleH << " ";
f >> dobleH;
faux << dobleH << " ";
f >> CA;faux << CA << " ";
f >> CI;
faux << CI << " ";
f >> BR;
faux << BR << " ";
f >> pitcher;
faux << pitcher << "\n";
}
f >> codi;
}
f.close();
faux.close();
} else {
cout << "No se puede abrir el archivo...\n";
}
remove("datos.txt");
rename("temp.txt","datos.txt");
}
void burbuja_pro_bateo (struct DATOS_JUGADOR a[])
{
int i,j;
struct DATOS_JUGADOR temp;for(i=1;i<tamanio;i++)
for(j=tamanio-1;j>=i;j--)
if(a[j-1].pro_bateo >a[j].pro_bateo)
{
temp=a[j-1];
a[j-1]=a[j];
a[j]=temp;
} }
void burbuja_efec_pit (struct DATOS_JUGADOR a[])
{
int i,j;
struct DATOS_JUGADOR temp;
for(i=1;i<tamanio;i++)
for(j=tamanio-1;j>=i;j--)
if(a[j-1].efec_pit >a[j].efec_pit)
{
temp=a[j-1];
a[j-1]=a[j];
a[j]=temp;
} }void mostrar_mejores(DATOS_JUGADOR jugadores[])
{
int i;
int count=0;
string key = "pitcher";
system("cls");
cout << fixed << setprecision(2);
burbuja_pro_bateo (jugadores);
cout << "Mejores bateadores" << endl;
cout << "-----------------------------------" << endl;
for (int i=tamanio-1; i>=0;i--)
{
//si ya encontro al 3 mejores
if (count==3){
break;
}
if(jugadores[i].posicion.compare(key) != 0){cout << "- " << jugadores[i].nom << endl;
count++;
}
}
count=0;
cout << "Mejores pitchers" << endl;
cout << "-----------------------------------" << endl;
burbuja_efec_pit (jugadores);
for (int i=tamanio-1; i>=0;i--)
{
//si ya encontro al 3 mejores
if (count==3){
break;
}
if(jugadores[i].posicion.compare(key) == 0){
cout << "- " << jugadores[i].nom << endl;
count++;}
}
}
void mostrar_resultados(ifstream &f) {
int i=0;
struct DATOS_JUGADOR jugadores[tamanio];
string
nom,nac,pais,codi,batea,lanza,equipo,posicion,IP,BB,K,CL,G,P,VB,H,HR,tripleH,dobleH,CA,CI,BR,pitcher;
float peso,estatura;
system("cls");
f.open("datos.txt",ios::in);
f >> codi;
while(!f.eof()) {
jugadores[i].cod=codi;f >> jugadores[i].nom;
f >> jugadores[i].nac;
f >> jugadores[i].pais;
f >> jugadores[i].peso;
f >> jugadores[i].estatura;
f >> jugadores[i].batea;
f >> jugadores[i].lanza;
f >> jugadores[i].equipo;
f >> jugadores[i].posicion;
string key = "pitcher";
if(jugadores[i].posicion.compare(key) == 0){
f >> jugadores[i].IP;
f >> jugadores[i].BB;f >> jugadores[i].K;
f >> jugadores[i].CL;
f >> jugadores[i].G;
f >> jugadores[i].P;
jugadores[i].calc_efec_pit();
f >> codi;
}
else{
f >>jugadores[i].VB;
f >> jugadores[i].H;
f >> jugadores[i].HR;
f >> jugadores[i].tripleH;
f >> jugadores[i].dobleH;f >> jugadores[i].CA;
f >> jugadores[i].CI;
f >> jugadores[i].BR;
jugadores[i].calc_pro_bateo();
f >> codi;
}
i++;
}
f.close();
mostrar_mejores( jugadores);
getch();
}main() {
ofstream F;
ifstream Fl;
int opc;
int i;
do {
opc = menu();
switch(opc) {
case 1:
for(i=0; i<tamanio; i++)
{
registrar(F);
}
break;
case 2:
mostrar(Fl);
break;
case 3:
mostrar_resultados(Fl);
break;
case 4:
buscar(Fl);
break;case 5:
borrar(Fl);
break;
}
} while(opc != 6);
}