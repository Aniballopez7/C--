/*1.Realice un programa para introducir un valor y almacenarlo en la variable X,
luego valida si X es mayor que 20 e imprime por pantalla X es mayor, si X es menor
que 10, "imprima X es menor"
 */


#include <iostream>
using namespace std;

int main(){
	int x;
	cout<<"introduzca un valor"<<endl; cin>>x;	
	if(x>20)
	cout<<"X es mayor. ";
	else if(x<10)
	cout<<"X es menor. ";
	
	return 0;
}
