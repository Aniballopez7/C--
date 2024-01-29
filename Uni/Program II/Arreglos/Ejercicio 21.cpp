#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    float numeros[5],sn=0,sp=0,p=0,cont=0;
    /*
    Donde:
    sn : suma de los negativos
    sp : suma de los positivos
    p: promedio
    cont: contador
    */
    cout<<"A continuacion va a iniciar 6 numeros\n"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<"Ingrese un numero: ";cin>>numeros[i]; 
        if (numeros[i]<0)
        {
            sn += numeros[i];
        }
        if (numeros[i]>0)
        {
            sp += numeros[i];
            cont++;
        }
    }
    p = sp/cont;
    if (sp > 0)
    {
        cout<<"\nEl promedio de los numeros positivos: "<<p<<endl;
        
    }else{
        cout<<"\nNo se puede determinar una suma ni un promedio porque no se insertaron numeros posivos"<<endl;
    }

    if (sn < 0)
    {
        cout<<"\nLa sumatoria de los numeros negativos: "<<sn<<endl; 
    }else{
        cout<<"\nNo se insertaron numeros negativos\n"<<endl;
    }
    cout<<"\n"<<endl;
    system("pause");
    return 0;
}
