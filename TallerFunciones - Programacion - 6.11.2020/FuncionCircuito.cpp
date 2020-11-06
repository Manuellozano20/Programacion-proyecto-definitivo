#include<iostream>
using namespace std;


float Circuito(int tipo, float r1, float r2, float r3, float voltaje);

int main ()
{
    int tipo;
    float r1, r2, r3, voltaje, corrientetotal;
    cout<<"para esta funcion ingrese 1 si es circuito en serie y 2 si es en paralelo"<<endl;
    cin>>tipo;
    cout<<"A continuacion ingrese las 3 resistencias"<<endl;
    cin>>r1;
    cin>>r2;
    cin>>r3;
    cout<<"Por ultimo la fuente de voltaje"<<endl;
    cin>>voltaje;
    corrientetotal = Circuito(tipo,r1,r2,r3,voltaje);
    cout<<"Su corriente toal del circuito es "<<corrientetotal<<endl;
    cout<<"Su voltaje total va a ser el voltaje que ingreso"<<endl;
}

float Circuito(int tipo, float r1, float r2, float r3, float voltaje)
{
    float rt, voltaje, corriente; 
    switch (tipo)
    {
    case 1:
        rt=r1+r2+r3;
        corriente = voltaje/rt;
    break;
    case 2:
        rt = 1 / ((1/r1) + (1/r2) + (1/r3) );
        corriente = voltaje/rt;
    break;
    }
    return corriente;
}