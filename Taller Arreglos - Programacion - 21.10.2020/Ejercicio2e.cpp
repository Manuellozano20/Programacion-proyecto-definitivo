#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int a, b, suma=0, media, suma2=0, suma3=0;
    float partedeabajo, partedearriba, sesgo;
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
    suma3=suma3+(pow((arreglo[i]-media),3));
    }
    partedearriba=(1/a)*suma3;
    for (int i=0; i<a; i++)
    {
        suma2=suma2+(pow((arreglo[i]-media),2));
    }
    partedeabajo=sqrt(pow((suma2/a-1),3));
    cout<<"La desviacion estandar es "<<partedeabajo<<endl;
    sesgo=partedearriba/partedeabajo;
    cout<<"El valor del sesgo"<<sesgo;
}