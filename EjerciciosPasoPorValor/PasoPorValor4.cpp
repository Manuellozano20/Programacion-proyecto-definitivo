#include <iostream>
#include <math.h>
using namespace std;
float CorrienteyTension(float Resistencia1, float Resistencia2, float Fuente, int PoS);
int main()
{
float Resistencia1, Resistencia2, Fuente, Resultado;
int PoS;
cout<<"A continuacion por favor digite los datos que se le pidan"<<endl<<"Resistencia 1"<<endl;
cin>>Resistencia1;
cout<<"Resistencia 2"<<endl;
cin>>Resistencia2;
cout<<"Valor de la Fuente"<<endl;
cin>>Fuente;
cout<<"A continuacion ingrese que tipo de circuito es "<<endl<<"Ingrese 1 para paralelo y 2 para serie"<<endl;
cin>>PoS;
Resultado=CorrienteyTension(Resistencia1, Resistencia2, Fuente, PoS);
cout<<"La corriente total es "<<Resultado<<" Amperios"<<endl;
cout<<"El voltaje total es "<<Fuente<<" Voltios"<<endl;

return 0;
}
float CorrienteyTension(float Resistencia1, float Resistencia2, float Fuente, int PoS)
{
  switch (PoS)
 { 
 case 1:
    {
    float Corriente=Fuente/((Resistencia1*Resistencia2)/(Resistencia1+Resistencia2));
    return Corriente;
    }
 break;
 case 2:
    {
    float Corriente2=Fuente/(Resistencia1+Resistencia2);
    return Corriente2;
    }
 break;
 default:
    {
    cout<<"Opcion no valida"<<endl;
    }
    break;
    
 }
} 