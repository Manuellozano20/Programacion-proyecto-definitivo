#include<iostream>
using namespace std;

float corriente(float voltaje, float resistencia);

int main()
{
    float voltaje, resistencia, corriente1;
    cout<<"Ingrese el voltaje"<<endl;
    cin>>voltaje;
    cout<<"Ingrese resistencia"<<endl;
    cin>>resistencia;
    corriente1 = corriente(voltaje, resistencia);
    cout<<"La corriente del circuito es "<<corriente1<<endl;
}

float corriente(float voltaje, float resistencia)
{
    float intensidad = voltaje/resistencia;
    
    return intensidad;
}