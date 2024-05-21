/*Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego encuentre y muestre el número más grande.
usando ciclo while*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number =0, sum=0;
    int numbers[10];
    int i = 0;
    int max = 0;

    while (i < 10)
    {
        cout<<"Dime un numero: ";
        cin>>number;
        numbers[i] = number;
        if (number > max)
        {
            max = number;
        }
        i++;
    }

    cout<<"El numero mas grande es: "<<max<<endl;
    return 0;
}
