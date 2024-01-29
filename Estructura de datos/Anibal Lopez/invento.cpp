#include<iostream>
using namespace std;

int main(){
	int a,x,cont=0,i;
	cout<<"ingrese el primer numero: "<<endl;
	cin>>a;
	cout<<"ingrese el segundo numero: "<<endl;
	cin>>x;
	if(a>x){
	for(int i=x;i<=a;i++){
	cout<<i<<endl;
	if(i%2==0)
	cont++;}
	
}else{
for (int i=a;i<=x;i++){
	cout<<i<<endl;
	if(i%2==0)
	cont++;}
	}
	cout<<"la cantidad de pares es: "<<cont<<endl;
	return 0;
}
