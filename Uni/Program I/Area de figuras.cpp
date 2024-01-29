 //Programa que permite el calculo del area de las figuras geometricas *  

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int menu,opc;
	float pi = 3.14,area,r1,r2,ancho,p,a,g,medida,base,altura,lado,D,d,B,b,r,longitud;	
	do
	{
		system("clear");
		cout<<"Menu del programa\n"<<endl;
		cout<<"1. Calcular el area de un cuadrado"<<endl;
		cout<<"2. Calcular el area de un triangulo"<<endl;
		cout<<"3. Calcular el area de un rectangulo"<<endl;
		cout<<"4. Calcular el area de un rombo"<<endl;
		cout<<"5. Calcular el area de un romboide"<<endl;
		cout<<"6. Calcular el area de un trapecio"<<endl;
		cout<<"7. Calcular el area de un circulo"<<endl;
		cout<<"8. Calcular el area de un paralelogramo"<<endl;
		cout<<"9. Calcular el area de un ovalo"<<endl;
		cout<<"10. Calcular el area de un penatgono"<<endl;
		cout<<"11. Calcular el area de un hexagono"<<endl;
		cout<<"12. Calcular el area de un cubo"<<endl;
		cout<<"13. Calcular el area de un cilindro"<<endl;
		cout<<"14. Calcular el area de una esfera"<<endl;
		cout<<"15. Calcular el area de una cono"<<endl;
		cout<<"16. Salir"<<endl;
		cout<<"\nOpcion: ";cin>>opc;
		system("clear");
    	switch(opc)
		{	
			case 1:
				cout<<"Cuadrado"<<endl;
				cout<<"\nIngrese la medida de un lado del cuadrado: ";cin>>lado;
				area = pow(lado,2);
				cout<<"\nEl area del cuadrado es de: "<<area<<endl;
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break;
			case 2:
				cout<<"Triangulo"<<endl;
				cout<<"\nIngrese la base del triangulo: ";cin>>base;
				cout<<"\nIngrese la altura del triangulo: ";cin>>altura;
				area = (base * altura) / 2;
				cout<<"\nEl area del triangulo es de: "<<area<<endl;
				cout<<"\n";
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break; 	
			case 3:
				cout<<"Rectangulo"<<endl;
				cout<<"\nIngrese la base del rectangulo: ";cin>>base;
				cout<<"\nIngrese la altura del rectagulo: ";cin>>altura;
				area = base * altura;
				cout<<"\nEl area del rectugulo es de: "<<area<<endl;
				cout<<"\n";
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break;
			case 4:
				cout<<"Rombo"<<endl;
				cout<<"\nIngrese la diagonal menor del rombo: ";cin>>d;
				cout<<"\nIngrese la diagonal mayor del rombo: ";cin>>D;
				area = (D * d) / 2;
				cout<<"\nEl area del rombo es de: "<<area<<endl;
				cout<<"\n";
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break;
			case 5:
				cout<<"Romboide"<<endl;
				cout<<"\nIngrese la base del romboide: ";cin>>base;
				cout<<"\nIngrese la altura del romboide: ";cin>>altura;
				area = base * altura;
				cout<<"\nEl area del romboide es de: "<<area<<endl;
				cout<<"\n";
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break;
			case 6:
				cout<<"Trapecio"<<endl;
				cout<<"\nIngrese la base menor del trapecio: ";cin>>b;
				cout<<"\nIngrese la base mayor del trapecio: ";cin>>B;
				cout<<"\nIngrese la altura del trapecio: ";cin>>altura;
				area = (b * B) * altura / 2;
				cout<<"\nEl area del trapecio es de: "<<area<<endl;
				cout<<"\n";
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break;
			case 7:
				cout<<"Circulo"<<endl;
				cout<<"\nIngrese el radio del circulo: ";cin>>r;
				area = pi * (pow(r,2));
				cout<<"\nEl area del circulo es de: "<<area<<endl;
				cout<<"\n";
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break;
			case 8:
				cout<<"Paralelogramo"<<endl;
				cout<<"\nIngrese la base del paralelogramo: ";cin>>base;
				cout<<"\nIngrese la altura del paralelogramo: ";cin>>altura;
				area = base * altura;
				cout<<"\nEl area del paralelogramo es de: "<<area<<endl;
				cout<<"\n";
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break;
			case 9:
				cout<<"Ovalo"<<endl;
				cout<<"\nIngrese la longitud del ovalo: ";cin>>longitud;
				r1 = longitud / 2;
				cout<<"\nIngrese el ancho del ovalo: ";cin>>ancho;
				r2 = ancho / 2;
				cout<<"\nLos valores de r1 y r2"<<endl;
				cout<<"r1: "<<r1<<endl;
				cout<<"r2: "<<r2<<endl;
				area = (r1 * r2) * pi;
				cout<<"\nEl area del ovalo es de: "<<area<<endl;
				cout<<"\n";
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break;
			case 10:
				cout<<"Pentagono"<<endl;
				cout<<"\nIngrese medida de un lado del pentagono: ";cin>>medida;
				p = 5 * medida;
				cout<<"\nEl perimetro del pentagono es "<<p<<endl;
				cout<<"\nIngrese el apotema del pentagono: ";cin>>a;
				area = (a * p) / 2;
				cout<<"\nEl area del pentagono es de: "<<area<<endl;
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break;
			case 11:
				cout<<"Hexagono"<<endl;
				cout<<"\nIngrese la medida de un lado del hexagono: ";cin>>medida;
				p = 6 * medida;
				cout<<"\nEl perimetro del hexagono es "<<p<<endl;
				cout<<"\nIngrese el apotema del hexagano: ";cin>>a;	
				area = (a * p) / 2;
				cout<<"\nEl area del hexagono es de: "<<area<<endl;
				cout<<"\n";
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break;
			case 12:
				cout<<"Cubo"<<endl;
				cout<<"\nIngrese la medida de un lado del cubo: ";cin>>lado;
				area = 6 * pow(lado,2);
				cout<<"\nEl area del cubo es de: "<<area<<endl;
				cout<<"\n";
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break;
			case 13:
				cout<<"Cilindro"<<endl;
				cout<<"\nIngrese el radio del cilindro: ";cin>>r;
				cout<<"\nIngrese la altura del cilindro: ";cin>>altura;
				area =  2 * pi * r * (r + altura);
				cout<<"\nEl area del cilindro es de: "<<area<<endl;
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break;
			case 14: 
				cout<<"Esfera"<<endl;
				cout<<"\nIngrese el radio de la esfera: ";cin>>r;
				area = 4 * pi * pow(r,2);
				cout<<"\nEl area de la esfera es de: "<<area<<endl;
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break;
			case 15:
				cout<<"Cono"<<endl;
				cout<<"\nIngrese el radio del cono: ";cin>>r;
				cout<<"\nIngrese la altura del cono: ";cin>>altura;
				g = sqrt(pow(r,2) + pow(altura,2));
				cout<<"\nEl valor de la generatriz es de: "<<g<<endl;
				area = pi * r * (g + r);
				cout<<"\nEl area del cono es de: "<<area<<endl;
				system("\nread -p '\nPresiona Enter para continuar...' var");
				break;
			case 16:
				return 0;
				break;	
		}
	}while(opc != 16);
	
	system("\nread -p '\nPresiona Enter para continuar...' var");
	return 0;
}	
