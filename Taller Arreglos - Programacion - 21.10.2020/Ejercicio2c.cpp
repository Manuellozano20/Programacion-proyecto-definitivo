#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int a, prod=1, b;
    float med;
    cout<<"Ingrese el numero de datos que va a usar"<<endl;
    cin>>a;
    int arreglo[a];
    for (int i=0; i<a; i++)
    {
        cout<<"Ingrese datos"<<endl;
        cin>>b;
        arreglo[i]=b;
    }
    for (int i=0; i<a; i++)
    {
        prod=prod*arreglo[i];
    }
    med=pow(prod,1/a);
    cout<<"La media geometrica es"<<med<<endl;
    return 0;
}