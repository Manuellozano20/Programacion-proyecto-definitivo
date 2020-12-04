#include <iostream>
using namespace std;
int main ()
{
    int Arreglo1[10], b,n, suma=0, vaymay = -99999999 ;
    int *pArreglo1 = &Arreglo1[0];
    for (int i=0; i< b; i++)
    {
        cout<<"Ingrese numeros"<<endl;
        cin>>n;
        pArreglo1[i] = n;
        if (pArreglo1[i]>vaymay)
        {
            vaymay = pArreglo1[i];
        }
    }
     cout<<"El arreglo es: "<<endl;
     for (int i=0; i<10; i++)
    {
         cout<<pArreglo1[i]<<" ";
    }
    cout<<"El numero amyor es"<<vaymay<<endl;
}