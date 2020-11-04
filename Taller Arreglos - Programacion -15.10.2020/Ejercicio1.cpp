#include <iostream>
using namespace std;
int main ()
{
    int Arreglo1[100];
    for (int i=0; i<=99; i++)
    {
        Arreglo1[i] = 1;
    }
     cout<<"El arreglo de 1 es: "<<endl;
     for (int i=0; i<=99; i++)
    {
         cout<<Arreglo1[i]<<" ";
    }
    return 0;
}