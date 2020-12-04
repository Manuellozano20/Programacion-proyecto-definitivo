#include<iostream>
#include<math.h>
#define PI 3.141592
using namespace std;
void RadioYAreaCirculo (float circunferencia, float &radio, float &area);
int main ()
{

}
void RadioYAreaCirculo (float circunferencia, float &radio, float &area)
{
    radio = circunferencia/2*PI;
    area = PI*pow(radio,2);
}