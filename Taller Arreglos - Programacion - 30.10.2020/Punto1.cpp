#include <iostream>
#include <math.h>
#include <stdlib.h>   
#include <time.h>       

using namespace std;

int main()
{
    int nf,nc, valormin=9999;

    cout<<"Por favor ingrese el numero de filas de su arreglo"<<endl;
    cin>>nf;

    cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
    cin>>nc;

    int matrizA[nf][nc];
    cout<<endl<<endl<<"matriz A ="<<endl;
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            matrizA[i][j] =  rand() % 100 + 0;

            if (matrizA[i][j]< valormin)
            {
                valormin= matrizA[i][j];
            }
        }
    }
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            cout<<matrizA[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"el valor minimo en la matriz es"<<valormin<<endl;
}