#include<iostream>
using namespace std;

int SumaFibonacci (int limite);

int main ()
{
    int limite, sumafibo;
    cout<<"Ingrese hasta que numero quiere sumar la sucesion de fibonacci"<<endl;
    cin>>limite;
    sumafibo = SumaFibonacci(limite);
    cout<<"La sumatoria es "<<sumafibo<<endl;
}

int SumaFibonacci (int limite)
{
    int primnum = 0, segnum = 0, suma, sumatotal=0; 
    for (int i=0; i<= limite; i++)
    {
        suma = primnum + segnum; 
        sumatotal = sumatotal + suma;
        primnum = segnum;
        segnum = suma;
        suma=0;
    }
    return sumatotal;
}