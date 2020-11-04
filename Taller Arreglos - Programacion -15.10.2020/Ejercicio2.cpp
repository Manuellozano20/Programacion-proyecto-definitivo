#include <iostream>
using namespace std;
int main ()
{
    int Arreglo1[50];
    for (int i=0; i<=49; i++)
    {
        Arreglo1[i] = (i+1)*2;
    }
     cout<<"El arreglo de numeros pares es es: "<<endl;
     for (int i=0; i<=49; i++)
    {
         cout<<Arreglo1[i]<<" ";
    }
    return 0;
}