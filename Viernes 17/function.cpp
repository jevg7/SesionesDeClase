#include <iostream>
#include "variables.h"

using namespace std;

/*Prototipos de funciones*/
void principal();
void menu();
void ingresarEdades();
void mostrarEdades();
void edadMayor();

/*Funciones*/
void menu()
{
    system("cls||clear");
    cout << "1. Ingresar edades" << endl;
    cout << "2. Mostrar edades" << endl;
    cout << "3. Mostrar edad mayor" << endl;
    cout << "4. Mostrar edad menor" << endl;
    cout << "5. Mostrar promedio de edades" << endl;
    cout << "6. Salir" << endl;
}

/*Agregar Edades*/
void ingresarEdades()
{
    system("cls||clear");
    cout << "Dime la edad: ";
    cin >> ages[pos];
    pos++;
    system("pause");
}

void mostrarEdades()
{

    system("cls||clear");
    cout << "Las edades son: " << endl;
    for (int i = 0; i < pos; i++)
    {
        cout << ages[i] << endl;
    }
    system("pause");
}

void edadMayor()
{

    int mayor = 0;
    for (int i = 0; i < pos; i++)
    {
       
        if (ages[i] > mayor)
        {
            system("cls||clear");
            mayor = ages[i];
        }
        cout << "La edad mayor es: " << mayor << endl;
        system("pause");
    }
}
void principal()
{
    int option;

    while (option != 6)
    {
        menu();
        cout << "Dime una opcion: ";
        cin >> option;

        switch (option)
        {

        case 1:
            ingresarEdades();
            break;

        case 2:
            mostrarEdades();
            break;

        case 3:

            edadMayor();
            break;

        case 6:
            cout << "Adios" << endl;
            break;

        default:
            cout << "Opcion no valida" << endl;
        }
    }
}