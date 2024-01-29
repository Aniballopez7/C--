#include<iostream>
using namespace std;
class Bombilla
{
    private:
        string ID;
        float potencia,potenciaTotal;
    public:
        Bombilla(string _ID, float _potencia,float _potenciaTotal);
        void encender();
        void apagar();
        void potenciaConsumida();
        void potenciaTotalConsumida();
};

Bombilla::Bombilla(string _ID, float _potencia,float _potenciaTotal)
{
    ID = _ID;
    potencia = 0;
    potenciaTotal = 0;

}
void Bombilla::encender()
{
    if (potencia >= 0)
    {
        potencia += 10;
    }
    cout<<"\nBombilla "<<ID<<" tiene una potencia de "<<potencia<<endl;
    potenciaTotal += potencia;
}
void Bombilla::apagar()
{
    if (potencia > 0)
    {
        potencia -= 10;
    }
    if (potencia == 0)
    {
        cout<<"La bombilla esta apagada"<<endl;
    }
    cout<<"\nBombilla "<<ID<<" tiene una potencia de "<<potencia<<endl;
    potenciaTotal -= potencia;
}
void Bombilla::potenciaConsumida()
{
    cout<<"\nLa potencia total del conjunto es: "<<potenciaTotal<<endl;
}
int main()
{
    float total;
    Bombilla b("1",0,0);
    Bombilla b2("2",0,0);
    Bombilla b3("3",0,0);
    Bombilla b4("4",0,0);
    Bombilla b5("5",0,0);

    b.encender();
    b.encender();
    b.encender();
    b2.encender();
    b2.encender();
    b3.encender();
    b3.encender();
    b3.encender();
    b3.apagar();
    b4.encender();
    b5.encender();
    cout<<"\nPotencias consumidas por todos los bombillos:"<<endl;
    b.potenciaConsumida();
    b2.potenciaConsumida();
    b3.potenciaConsumida();
    b4.potenciaConsumida();
    b5.potenciaConsumida();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
