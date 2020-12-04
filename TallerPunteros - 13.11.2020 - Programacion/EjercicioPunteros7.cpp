#include <iostream>
#include <stdlib.h>     
#include <time.h>   
using namespace std;
int main ()
{
    int n;
    cout<<"Ingrese tamaño de arreglos"<<endl;
    cin>>n;

    srand (time(NULL));
    int Arreglo1[n];
    int Arreglo2[n];
    int *pArreglo2 = &Arreglo1[0];
    int *pArreglo1 = &Arreglo1[0];
    for (int i=0; i< n; i++)
    {
        pArreglo1[i] = rand() % 100 + 1;
        if (pArreglo1[i] % 2 == 0)
        {
            pArreglo2 = pArreglo1;
        }
    }
    cout<<"El arreglo es: "<<endl;
     for (int i=0; i<n; i++)
    {
         cout<<pArreglo1[i]<<" ";
    }
    cout<<"El arreglo de pares es: "<<endl;
     for (int i=0; i<n; i++)
    {
        cout<<pArreglo2[i]<<" ";
    }
}