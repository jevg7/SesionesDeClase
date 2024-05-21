#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number =0, sum=0;

    while (number != -1)
    {
    
        cout<<"Dime un numero: ";
        cin>>number;
        if (number < 0)
        {
            break;
        }
        sum+=number;
    }

    cout<<"La suma es: "<<sum<<endl;
    return 0;
}
