/*Pequeña idea de como realizar un juego de preguntas en c++*/
#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <time.h> /* time */

using namespace std;

struct preguntas{
	int correcta;
	string pregunta;
	string respuesta1;
	string respuesta2;
	string respuesta3;
}p[5];



int mostrarMenu();
void jugarRonda();
void definirPreguntas();
void limpiarPantalla();

int main(){
	definirPreguntas();
	while(true){
		 
		if(mostrarMenu() == 0){
			return 0;
		}
	}
}
int mostrarMenu(){
	limpiarPantalla();
	int decision = 0;
	cout<<"Menu:"<<endl;
	cout<<"1) Jugar una ronda."<<endl;
	cout<<"2) Salir."<<endl;
	cin>>decision;
	switch(decision){
		case 1:
			limpiarPantalla();
			jugarRonda();		
			break;
		case 2:
			return 0;
			break;
		default:
			mostrarMenu();
			break; 
	}
	return 0;
}

void jugarRonda(){
	int puntaje = 0;
	srand((unsigned)time(0));
	int id,idA[6];
	bool rep = false;
	for(int i = 0; i < 6; i++){
		
		do{
			rep = false;
			id = rand()%(5-0+1)+0;
			for(int j = 0; j < i; j++){
				if(idA[j] == id){
					rep = true;
				}
			}
		}while(rep);
		
		idA[i] = id;
		int respuesta;
		cout<<p[id].pregunta<<endl;
		cout<<p[id].respuesta1<<endl;
		cout<<p[id].respuesta2<<endl;
		cout<<p[id].respuesta3<<endl;
		cin>>respuesta;
		if(respuesta == p[id].correcta){
			cout<<"Correcto"<<endl;
			puntaje += 10;
		}else{
			cout<<"Incorrecto"<<endl;
			cout<<"La opción Correcta es la: "<<p[id].correcta<<endl;
		}
		cout<<"Desea continuar s/n."<<endl;
		char continuar;
		cin>>continuar;
		if(continuar != 's'){
			cout<<"Tu puntaje es de "<<puntaje<<"/"<<(i+1)*10<<"puntos."<<endl;
			return;
		}
	limpiarPantalla();
	}
	cout<<"Tu puntaje es de "<<puntaje<<"/100 puntos."<<endl;
	return;
}
void definirPreguntas(){
	
	p[0].pregunta = "¿En que año llegó el hombre a la Luna?";
	p[0].respuesta1 = "1) En el año 1969.";
	p[0].respuesta2 = "2) En el año 1978.";
	p[0].respuesta3 = "3) En el año 1965.";
	p[0].correcta = 1;
	
	p[1].pregunta = "¿Cómo se conocía la Primera Guerra Mundial antes de que estallara la segunda?";
	p[1].respuesta1 = "1) La Guera Mundial.";
	p[1].respuesta2 = "2) La Gran Guerra.";
	p[1].respuesta3 = "3) Ninguna de las anteriores.";
	p[1].correcta = 2;
	
	p[2].pregunta = "¿Qué país está entre Perú y Colombia?";
	p[2].respuesta1 = "1) Mexico.";
	p[2].respuesta2 = "2) Venezuela.";
	p[2].respuesta3 = "3) Ecuador.";
	p[2].correcta = 3;
	
	p[3].pregunta = "¿Cuál es el país del mundo con mayor población?";
	p[3].respuesta1 = "1) China.";
	p[3].respuesta2 = "2) Rusia.";
	p[3].respuesta3 = "3) Japon.";
	p[3].correcta = 1;
	
	p[4].pregunta = "¿Quién escribió las aventuras de Sandokán?";
	p[4].respuesta1 = "1) Jorge Luis Borges.";
	p[4].respuesta2 = "2) Emilio Salgari.";
	p[4].respuesta3 = "3) Silvina Ocampo.";
	p[4].correcta = 2;
	
	p[5].pregunta = "¿cuanto es 2+2?";
	p[5].respuesta1 = "1) 7.";
	p[5].respuesta2 = "2) 4.";
	p[5].respuesta3 = "3) 5.";
	p[5].correcta = 2;

}
void limpiarPantalla()
{
	int estado = system("cls");
	if(estado == -1){
		mostrarMenu();
	}
}
