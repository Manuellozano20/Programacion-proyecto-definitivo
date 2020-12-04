#include <iostream>
#include <math.h>     

using namespace std;

int main()
{
int Opcion, FS, CS, DatosSA, DatosSB;
cout<<"Bienvenido a la calculadora de matrices"<<endl;
cout<<"Le ofrecemos lo siguiente: "<<endl<<"1.Suma "<<endl<<"2.Resta "<<endl<<"3.Multiplicacion "<<endl<<"4.Transpuesta "<<endl<<"5.Multiplicacion por un escalar "<<endl;
cout<<"Elija la opcion "<<endl;
cin>>Opcion;
switch (Opcion)
{
    case 1:
        cout<<"Ingrese cuantas filas tienen las matrices a sumar"<<endl;
        cin>>FS;
        cout<<"Ingrese cuantas columnas tienen las matrices a sumar"<<endl;
        cin>>CS;
        int MatrizSA[FS][CS], MatrizSB[FS][CS], MatrizSC[FS][CS];
        cout<<"Ingrese los datos de la primera matriz"<<endl;
        for ( int i = 0; i < FS; i++)
        {
            for ( int j = 0; j < CS; j++)
            {
                cin>>DatosSA;
                MatrizSA[i][j]=DatosSA;
            }
            
        }
        cout<<"Ingrese los datos de la segunda matriz"<<endl;
        for ( int i = 0; i < FS; i++)
        {
            for ( int j = 0; j < CS; j++)
            {
                cin>>DatosSB;
                MatrizSB[i][j]=DatosSB;
            }
            
        }
        cout<<"La suma seria: "<<endl;
        for ( int i = 0; i < FS; i++)
        {
            for ( int j = 0; j < CS; j++)
            {
                MatrizSC[i][j]=(MatrizSA[i][j]+MatrizSB[i][j]);
            }
            
        }
        for ( int i = 0; i < FS; i++)
        {
            for ( int j = 0; j < CS; j++)
            {
                cout<<MatrizSC[i][j]<<" ";
            }cout<<endl;   
        }
    break;

    default:
        cout<<"Opcion no valida, lo sentimos"<<endl;
    break;
}
return 0;
}