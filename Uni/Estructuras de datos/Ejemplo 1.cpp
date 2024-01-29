#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
int u1, u2;
int v=3;
int *pv;
u1=2*(v+5);
pv=&v;
u2=2*(*pv+5);
cout<<"u1 = "<<u1<<" u2 = "<<u2<<endl;
system("pause"); }