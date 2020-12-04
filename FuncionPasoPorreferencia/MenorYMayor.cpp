#include<iostream>
#include<math.h>
using namespace std;

void MenorYMayor (float a, float b, float c, float &mayor, float &menor);

int main ()
{

}
void MenorYMayor (float a, float b, float c, float &mayor, float &menor)
{
    if (a>b)
    {
        mayor=a;
        if (mayor>c)
        {
            mayor=mayor;
        }
    }
    if (b>a)
    {
        mayor=b;
        if (mayor>c)
        {
            mayor=mayor;
        }
    }
    if (c>a)
    {
        mayor=c;
        if (mayor>b)
        {
            mayor=mayor;
        }
    }
    if (a<b)
    {
        menor = a;
        if (menor>c)
        {
            menor=menor;
        }
    }
    if (b<a)
    {
        menor=b;
        if (menor<c)
        {
            menor=menor;
        }
    }
    if (c<a)
    {
        menor=c;
        if (menor<b)
        {
            menor=menor;
        }
    }
}