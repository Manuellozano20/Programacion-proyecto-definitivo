#include <iostream>
#include <math.h>
#include <stdlib.h>     
#include <time.h>       

using namespace std;

int main()
{
    int Nf, Datos, Datos2, Nc;

    cout<<"Por favor ingrese el numero de filas de su arreglo"<<endl;
    cin>>Nf;

    cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
    cin>>Nc;

    int matrizA[Nf][Nc],matrizB[Nf][Nc], matrizC[Nf][Nc];
    int *pmatrizA=&matrizA[0][0];
    int *pmatrizB=&matrizB[0][0];
    int *pmatrizC=&matrizC[0][0];
    for(int i=0;i<Nf;i++)
    {
        for(int j=0;j<Nc;j++)
        {
            cout<<"por favor digite los valores de la matrizA"<<endl;
            cin>>Datos;
            pmatrizA[i*Nf+j]=Datos;
        }
    }
    for(int i=0;i<Nf;i++)
    {
        for(int j=0;j<Nc;j++)
        {
            cout<<"por favor digite los valores de la matrizB"<<endl;
            cin>>Datos2;
            pmatrizB[i*Nf+j]=Datos2;
        }cout<<endl;
    }
    for(int i=0;i<Nf;i++)
    {
        for(int j=0;j<Nc;j++)
        {
         pmatrizC[i*Nf+j]= pmatrizA[i*Nf+j]+pmatrizB[i*Nf+j];
        }
    }
    cout<<endl<<endl<<"matriz C ="<<endl;
    for(int i=0;i<Nf;i++)
    {
        for(int j=0;j<Nc;j++)
        {
            cout<<pmatrizC[i*Nf+j]<<" ";
        }cout<<endl;
    }
}