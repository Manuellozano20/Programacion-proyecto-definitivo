#include <iostream>
#include <math.h>
using namespace std;
float DistanciaEu(float Catetoa, float Catetob);
int main()
{
float Catetoa, Catetob, Resultado;
cout<<"Ingrese a continuacion la medida de los dos catetos para conocer la distancia euclidiana"<<endl;
cin>>Catetoa;
cin>>Catetob;
Resultado=DistanciaEu(Catetoa, Catetob);
cout<<"La distancia euclidiana es "<<Resultado<<endl;
return 0;
}
float DistanciaEu(float Catetoa, float Catetob)
{
    float DistanciaEuc=sqrt((pow(Catetoa,2))+(pow(Catetob,2)));
    return DistanciaEuc;
}