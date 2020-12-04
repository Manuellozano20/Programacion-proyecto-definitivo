#include<iostream>
#include<math.h>
using namespace std;

void CambioCoordenadas(float x, float y, float &r, float &ang);
int main()
{

}
void CambioCoordenadas(float x, float y, float &r, float &ang)
{
    r = sqrt(pow(x,2)+pow(y,2));
    ang = atan(y/x);
}