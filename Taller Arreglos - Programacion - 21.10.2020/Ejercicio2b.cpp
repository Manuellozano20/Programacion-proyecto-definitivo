#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int a, b, suma=0, media, suma2=0;
    float desv;
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
    for (int i=0; i<a; i++)
    {
        suma2=suma2+(pow((arreglo[i]-media),2));
    }
    desv=sqrt(suma2/a-1);
    cout<<"La desviacion estandar es "<<desv<<endl;
    return 0;
}