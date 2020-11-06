#include<iostream>
#include<math.h>
#define PI 3.141592
using namespace std;

float AreaCirculo (float radio);

int main ()
{
    float radio, area;
    cout<<"Ingrese el radio del circulo"<<endl;
    cin>>radio;
    area = AreaCirculo(radio);
    cout<<"El radio es "<<area<<endl;
}

float AreaCirculo (float radio)
{
    float Areaci = PI * pow(radio,2);

    return Areaci;
}