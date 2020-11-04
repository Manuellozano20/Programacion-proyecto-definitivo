#include <iostream>
using namespace std;
int main ()
{
    int a, b, suma=0;
    float media;
    cout<<"Ingrese el numero de datos"<<endl;
    cin>>a;
    int arreglo[a];
    for (int i=0; i<a; i++)
    {
        cout<<"Ingrese el dato "<<(i+1)<<endl;
        cin>>b;
        arreglo[i]=b;
        suma=suma+arreglo[i];
    }
    media=suma/a;
    cout<<"La media es esta"<<media<<endl;

    return 0;
}