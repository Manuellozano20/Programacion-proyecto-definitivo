#include <iostream>
using namespace std;
int main ()
{
    int Arreglo1[100];
    int *pArreglo1 = &Arreglo1[0];
    for (int i=0; i<=99; i++)
    {
        pArreglo1[i] = 1;
    }
     cout<<"El arreglo de 1 es: "<<endl;
     for (int i=0; i<=99; i++)
    {
         cout<<pArreglo1[i]<<" ";
    }
    return 0;
}