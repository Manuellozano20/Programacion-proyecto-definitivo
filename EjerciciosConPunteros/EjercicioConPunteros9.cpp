#include <iostream>
#include <math.h>
#include <stdlib.h>   
#include <time.h>       

using namespace std;

int main()
{
    int Nf, Nc;
    cout<<"en pantalla le mostrara la matriz identidad"<<endl;

    cout<<"Por favor ingrese el numero de filas de la matriz "<<endl;
    cin>>Nf;

    cout<<"Por favor ingrese el numero de columnas de la matriz"<<endl;
    cin>>Nc;

    int identidad[Nf][Nc];
    int *pidentidad=&identidad[0][0];
    cout<<endl<<endl<<"la matriz identidad es ="<<endl;
    for(int i=0;i<Nf;i++)
    {
        for(int j=0;j<Nc;j++)
        {
           if (i==j)
           {
               pidentidad[i*Nf+j]=1;
           }
           else 
           {
               pidentidad[i*Nf+j]=0;
           }
        }
    }
    for(int i=0;i<Nf;i++)
    {
        for(int j=0;j<Nc;j++)
        {
            cout<<identidad[i][j]<<" ";
        }cout<<endl;
    }

}