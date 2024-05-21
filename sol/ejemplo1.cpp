#include <iostream>

using namespace std;

#define MAX 100
int main(int argc, char const *argv[])
{
    int v1[MAX], v2[MAX], v3[MAX], n;

    cout << "Ingrese el tamaño de los vectores: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Ingrese el valor " << i+1 << " del vector 1: ";
        cin >> v1[i];
    }

    for(int i = 0; i < n; i++){
        cout << "Ingrese el valor " << i+1 << " del vector 2: ";
        cin >> v2[i];
    }

    //suma de vectores
    for(int i = 0; i < n; i++){
        v3[i] = v1[i] + v2[i];
    }

    cout << "La suma de los vectores es: ";
    for(int i = 0; i < n; i++){
        cout << v3[i] << " ";
    }
    return 0;
}
