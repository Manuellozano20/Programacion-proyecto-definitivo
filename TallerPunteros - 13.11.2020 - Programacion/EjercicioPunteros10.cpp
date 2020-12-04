#include <iostream>
#include <math.h>
#include <stdlib.h>     
#include <time.h>       

using namespace std;

int main()
{
    int ncol, n, b;

    cout<<"Por favor ingrese el numero de filas de su arreglo y"<<endl;
    cin>>ncol;

    cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
    cin>>ncol;

    int matrizA[ncol][ncol],matrizB[ncol][ncol], matrizC[ncol][ncol];
    int *pmatrizA=&matrizA[0][0];
    int *pmatrizB=&matrizB[0][0];
    int *pmatrizC=&matrizC[0][0];
    for(int i=0;i<ncol;i++)
    {
        for(int j=0;j<ncol;j++)
        {
            cout<<"por favor digite los valores de la primer matriz"<<endl;
            cin>>n;
            pmatrizA[i*n+j]=n;
        }
    }
    for(int i=0;i<ncol;i++)
    {
        for(int j=0;j<ncol;j++)
        {
            cout<<"por favor digite los valores de la segunda matriz"<<endl;
            cin>>b;
            pmatrizB[i*n+j]=b;
        }cout<<endl;
    }
    for(int i=0;i<ncol;i++)
    {
        for(int j=0;j<ncol;j++)
        {
         pmatrizC[i*n+j]= pmatrizA[i*n+j]+pmatrizB[i*n+j];
        }
    }
    cout<<endl<<endl<<"matriz C ="<<endl;
    for(int i=0;i<ncol;i++)
    {
        for(int j=0;j<ncol;j++)
        {
            cout<<pmatrizC[i*n+j]<<" ";
        }cout<<endl;
    }
}