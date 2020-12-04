#include <iostream>
#include <math.h>
using namespace std;
float AreaCirculo(float R);
int main()
{
float R, Resultado;
cout<<"Este programa le ayudara a calcular el area de un circulo"<<endl;
cout<<"Digite por favor el radio del circulo"<<endl;
cin>>R;
Resultado=AreaCirculo(R);
cout<<"El area del circulo es "<<Resultado<<endl;
return 0;
}
float AreaCirculo(float R)
{
    float AreaCir=3.1416*(pow(R,2));
    return AreaCir;
}
