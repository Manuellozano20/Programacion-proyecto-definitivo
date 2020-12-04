#include <iostream>
using namespace std;
float Factorial(float Num);
int main()
{
int Resultado, Num;
cout<<"Ingrese el numero para conocer su factorial"<<endl;
cin>>Num;
Resultado=Factorial(Num);
cout<<"El resultado es "<<Resultado<<endl;

return 0;
}
float Factorial(float Num)
{
 int Fact1=1;
 for ( int i = 0; i <= Num; i++)
 {
    Fact1=(i)*Fact1;
 }
 int Factoria=Fact1;
 return Factoria;
}