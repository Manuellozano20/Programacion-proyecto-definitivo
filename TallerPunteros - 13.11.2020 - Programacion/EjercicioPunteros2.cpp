  
#include <iostream>
using namespace std;
int main ()
{
    int Arreglo1[50];
    int *pArreglo1 = &Arreglo1[0];
    for (int i=0; i<=49; i++)
    {
        pArreglo1[i] = i*2;
    }
     cout<<"El arreglo de numeros por un escalar: "<<endl;
     for (int i=0; i<=49; i++)
    {
         cout<<pArreglo1[i]<<" ";
    }
    return 0;
}