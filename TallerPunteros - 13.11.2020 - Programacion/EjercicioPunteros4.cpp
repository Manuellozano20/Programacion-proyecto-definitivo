#include <iostream>
using namespace std;
int main ()
{
    int Arreglo1[10], b;
    int *pArreglo1 = &Arreglo1[0];
    for (int i=0; i< 10; i++)
    {
        cout<<"Ingrese numeros"<<endl;
        cin>>b;
        pArreglo1[i] = b;
    }
     cout<<"El arreglo es: "<<endl;
     for (int i=0; i<10; i++)
    {
         cout<<pArreglo1[i]<<" ";
    }
    return 0;
}