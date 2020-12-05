#include  <iostream>
using namespace std;

int main ()
{
    int nfc, n, contadori=1, contadorj=1, contadort;
    cout<<"Ingrese el numero de filas y columnas"<<endl;
    cin>>nfc;
    int MatrizA[nfc][nfc];
    for (int i=0; i<nfc; i++)
    {
        for (int j=0; j<nfc; j++)
        {
            cout<<"Ingrese numeros"<<endl;
            cin>>n;
            MatrizA[i][j] = n;
        }
    }
    for (int i=0; i<nfc; i++)
    {
        for (int j=0; j<nfc; j++)
        {
            cout<<MatrizA[i][j]<<" ";
        }cout<<endl;
    }
    for (int i=0; i<nfc; i++)
    {
        for (int j=0; j<nfc; j++)
        {
            if (MatrizA[i][j] == MatrizA[i+1][j] or MatrizA[i][j] == MatrizA[i][j+1])
            {
                contadori = contadori+1; 
                cout<<"El numero repetido es: "<<endl;
                cout<<MatrizA[i][j]<<endl;
                cout<<"Esta repetido "<<contadori<<" veces"<<endl;
            }
        }
    contadori=0;
    }
}   
