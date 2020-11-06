#include<iostream>
using namespace std;
 
float factorial(int num);
 
int main ()
{
    int numero, factorialnum;
    cout<<"Ingrese el numero del cual quiere conocer el factorial"<<endl;
    cin>>numero;
    factorialnum = factorial(numero);
    cout<<"El factorial es "<<factorialnum<<endl;
}

 float factorial(int num)
 {
    float fact=1;
    for (int i=1; i<=num ; i++)
    {
        fact=fact*i;
    }
    return fact;
 }