/*6. Escribe un programa que solicite al usuario ingresar la cantidad de calificaciones
que quiere promediar, luego ingrese esas calificaciones, las almacene en un
arreglo y calcule el promedio. usando cilo while*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number =0, sum=0;
    int n = 0;
    int i = 0;
    int calificaciones[100];
    float promedio = 0;

    cout<<"Cuantas calificaciones quieres promediar: ";
    cin>>n;

    while (i < n)
    {
        cout<<"Dime una calificacion: ";
        cin>>number;
        calificaciones[i] = number;
        sum+=number;
        i++;
    }

    promedio = sum/n;
    cout<<"El promedio es: "<<promedio<<endl;
    return 0;
}