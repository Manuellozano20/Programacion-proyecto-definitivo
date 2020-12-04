#include <iostream>
using namespace std;
int main ()
{
    int Arreglo1[10], b, suma=0;
    int *pArreglo1 = &Arreglo1[0];
    for (int i=0; i< b; i++)
    {
        if (i % 2 != 0)
        {
        pArreglo1[i] = i;
        suma=suma+i;
        }
    }
     cout<<"El arreglo es: "<<endl;
     for (int i=0; i<10; i++)
    {
         cout<<pArreglo1[i]<<" ";
    }
    cout<<"La suma es"<<suma<<endl;
}