#include <iostream>
using namespace std;
float const pi = 3.14;
class Circulo
{
	float radio;
	public:
		Circulo(float _ratio);
		void incremento();
		float areaCirulo();
		float areaEsfera();
};
Circulo::Circulo(float _ratio)
{
	radio = _ratio;
}
float Circulo::areaCirulo()
{
	return (pi * radio * radio);
}
float Circulo::areaEsfera()
{
	return (4 * pi * radio * radio);	
}
void Circulo::incremento()
{
	radio += 0.2;
}
int main(){
    float radio;
    cout<<"Ingrese el radio: ";cin>>radio;
    Circulo circulo(radio);
    cout<<"\n\t\t *********"<<endl;
    cout<<"\t\t * Lista *"<<endl;
    cout<<"\t\t *********\n"<<endl;
    cout<<"Area del cirulo \t  Area de la esfera\n"<<endl;
    circulo.incremento();
    cout<<"    "<<circulo.areaCirulo()<<"\t\t\t"<<circulo.areaEsfera()<<endl;
    circulo.incremento();
    cout<<"    "<<circulo.areaCirulo()<<"\t\t\t"<<circulo.areaEsfera()<<endl;
    circulo.incremento();
    cout<<"    "<<circulo.areaCirulo()<<"\t\t\t"<<circulo.areaEsfera()<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}