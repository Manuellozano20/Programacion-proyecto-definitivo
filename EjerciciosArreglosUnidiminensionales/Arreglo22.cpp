#include <iostream>
#include<time.h>
using namespace std;

int main()
{
int i=0,  Cantidad;
float Nm, Total;
cout<<"El siguiente programa le permite hacer la media aritmetica, a continuacion por favor ingrese la cantidad de numeros que ingresarà"<<endl;
cin>>Cantidad;
int ArregloA[Cantidad];
cout<<"A continuacion ingrese los numeros"<<endl;
for ( i = 0; i < Cantidad; i++)
{
 cin>>Nm;
 ArregloA[i]=Nm;
 Total=ArregloA[i]+Total;
}
cout<<"La media aritmetica de los numeros que ingreso es "<<(Total/Cantidad)<<endl;
return 0;
}