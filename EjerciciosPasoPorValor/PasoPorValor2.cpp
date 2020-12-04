#include <iostream>
using namespace std;
float Corriente(float Voltaje,float Resistencia);
int main()
{
float Voltaje, Resistencia, Resultado;
cout<<"Ingrese por favor el voltaje"<<endl;
cin>>Voltaje;
cout<<"Ingrese por favor la resistencia"<<endl;
cin>>Resistencia;
Resultado=Corriente(Voltaje,Resistencia);
cout<<"El resultado es "<<Resultado<<endl;
return 0; 
}
float Corriente(float Voltaje,float Resistencia)
{
 float Corrient=Voltaje/Resistencia;
 return Corrient;
} 
