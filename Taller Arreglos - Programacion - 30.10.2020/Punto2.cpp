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

    int matrizA[nf][nc];
    cout<<endl<<endl<<"matriz A ="<<endl;
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
           if (i==j)
           {
               matrizA[i][j]=1;
           }
           else 
           {
               matrizA[i][j]=0;
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

}