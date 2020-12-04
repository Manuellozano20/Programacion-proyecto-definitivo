#include <iostream>
#include <math.h>     

using namespace std;

int main()
{
int Nf, Nc, ValorMin=9999999;
float Datos;
cout<<"Este programa le permitira saber el valor minimo de un arreglo nxn"<<endl;
cout<<"A continuacion ingrese de cuantas filas quiere para su arreglo"<<endl;
cin>>Nf;
cout<<"A continuacion ingrese de cuantas columnas quiere para su arreglo"<<endl;
cin>>Nc;
int Matriz[Nf][Nc];
for ( int i = 0; i < Nf; i++)
{
    for ( int j = 0; j < Nc; j++)
    {
    cout<<"Por favor ingrese los datos de su matriz"<<endl;
    cin>>Datos;
    Matriz[i][j]=Datos;
    }
}
for ( int i = 0; i < Nf; i++)
{
    for ( int j = 0; j < Nc; j++)
    {
    cout<<Matriz[i][j]<<" ";
    }cout<<endl;
}
for ( int i = 0; i < Nf; i++)
{
    for ( int j = 0; j < Nc; j++)
    {
    if (Matriz[i][j]<ValorMin)   
    {
        ValorMin=Matriz[i][j];
    }
    }
      
}
cout<<"El valor minimo es "<<ValorMin<<endl;

}
