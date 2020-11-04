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

    int matrizA[nf][nc],matrizB[nf][nc];
    srand (time(NULL));
    cout<<endl<<endl<<"matriz A ="<<endl;
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            matrizA[i][j] =  rand() % 10 + 1;
            cout<<matrizA[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl<<endl<<"matriz Traspuesta ="<<endl;
    for(int i=0;i<nc;i++)
    {
        for(int j=0;j<nf;j++)
        {
            cout<<matrizA[j][i]<<" ";
        }cout<<endl;
    }
}