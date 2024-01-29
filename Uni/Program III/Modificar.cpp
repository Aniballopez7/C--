#include<iostream>
using namespace std;

int main()
{
    int n,i,x[100],salto,tem,band;
    char s;

        cout<<"defina la cantidad de elementos:";
        cin>>n;
        for(i=0;i<n;i++)
        {
            cout<<"elemento["<<i<<"]:";
            cin>>x[i];
        }
        cout<<"\nElementos sin ordenar:\n"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<x[i]<<" ";
            cout<<endl;
        }
        for(salto=n/2;salto>0;salto=salto/2)
        {
            do
            {
                band=0;
                for(i=0;i<n-salto;i++)
                {
                    if(x[i]>x[i+salto])
                    {
                    tem=x[i];
                    x[i]=x[i+salto];
                    x[i+salto]=tem; 
                    band=1;
                    }
                }
                
            }while(band==0);
        }
        cout<<"\nElementos ordenados:\n"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<x[i]<<" ";
            cout<<endl;
        }
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}
