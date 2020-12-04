#include<iostream>
#include<math.h>
using namespace std;

void Cuadratica(float a, float b, float c, float &x1, float &x2);

int main ()
{

}
void Cuadratica(float a, float b, float c, float &x1, float &x2)
{
    x1 = -b+(sqrt(pow(b,2)*(4*a*c)/2*a));
    x1 = -b-(sqrt(pow(b,2)*(4*a*c)/2*a));
}