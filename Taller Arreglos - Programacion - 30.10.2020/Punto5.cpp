#include <iostream>
#include <math.h>
#include <stdlib.h>     
#include <time.h>       

using namespace std;

int main()
{
    int nf,nc;

    cout<<"Por favor ingrese el numero de filas de su arreglo"<<endl;
    cin>>nf;

    cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
    cin>>nc;

    int matrizA[nf][nc],matrizB[nf][nc], matrizC[nf][nc];
    srand (time(NULL));
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            matrizA[i][j] =  rand() % 10 + 1;
            cout<<matrizA[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            matrizB[i][j] =  rand() % 10 + 1;
            cout<<matrizB[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            matrizC[i][j] = matrizA[i][j]+matrizB[i][j];
        }
    }
    cout<<endl<<endl<<"matriz C ="<<endl;
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            cout<<matrizC[i][j]<<" ";
        }cout<<endl;
    }
}