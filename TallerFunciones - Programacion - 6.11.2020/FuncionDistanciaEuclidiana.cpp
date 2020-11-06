#include<iostream>
#include<math.h>
using namespace std;

float DistanciaEuclidiana(int x1, int y1, int x2, int y2);

int main ()
{
    int x1, y1, x2, y2, distanciat;
    cout<<"Ingrese su punto x1"<<endl;
    cin>>x1;
    cout<<"Ingrese su punto y1"<<endl;
    cin>>y1;
    cout<<"Ingrese su punto x2"<<endl;
    cin>>x2;
    cout<<"Ingrese su punto y2"<<endl;
    cin>>y2;
    distanciat = DistanciaEuclidiana(x1, y1, x2, y2);
    cout<<"La distancia entre los puntos es "<<distanciat;
}

float DistanciaEuclidiana(int x1, int y1, int x2, int y2)
{
    float distancia;
    distancia = sqrt ( pow ( x2-x1 , 2 ) + pow ( y2-y2 , 2 ) );
    return distancia;

}