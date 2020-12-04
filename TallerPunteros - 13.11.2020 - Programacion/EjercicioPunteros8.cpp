#include <iostream>
#include <stdlib.h>     
#include <time.h>   
using namespace std;
int main ()   
{
    int n, valmin=9999;
    cout<<"Ingrese el tamaño de su arreglo"<<endl;
    cin>> n;
    int Arreglo1[n][n];
    int *pArreglo1 = &Arreglo1[0][0];
    srand (time(NULL));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pArreglo1[i*n+j] = rand() % 100 + 1;
            if (pArreglo1[i]<valmin)
            {
                valmin = pArreglo1[i];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<pArreglo1[i*n + j]<<" ";
        }cout<<endl;
    }cout<<endl;
    cout<<"el numero menor es "<<valmin<<endl;
}

