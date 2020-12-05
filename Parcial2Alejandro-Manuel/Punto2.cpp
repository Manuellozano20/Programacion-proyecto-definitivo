#include<iostream>
#include<string>
using namespace std;

struct banco
{
    string nombre;
    int edad;
    int did;
    string semestre;
};
int main ()
{
    banco x[2];
    x[0].nombre = "Alejandro";
    x[0].edad = 19;
    x[0].did = 1004519715;
    x[0].semestre = "Tercer semestre";

    x[1].nombre = "Manuel";
    x[1].edad = 20;
    x[1].did = 1004678912;
    x[1].semestre = "Tercer semestre";

    for (int i=0; i<2; i++)
    {
        cout<<"Nombre= "<<x[i].nombre<<endl;
        cout<<"Edad= "<<x[i].edad<<endl;
        cout<<"ID= "<<x[i].did<<endl;
        cout<<"Semestre= "<<x[i].semestre<<endl;
    }

}