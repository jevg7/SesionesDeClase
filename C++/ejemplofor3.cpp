/*Storage x amount of numbers and print those numbers*/
#include <iostream>
using namespace std;

#define MAX 100

int vector[MAX];
int pos=0;

void addnumbers(int num);
void printnumbers();


int main(int argc, char const *argv[])
{
    int cant;
    int num;
    cout<<"How many numbers do you want to store?"<<endl;
    cin>>cant;
    for (int i = 0; i < cant; i++)
    {
        cout<<"Enter a number"<<endl;
        cin>>num;
        addnumbers(num);
    }

    cout<<"The numbers are:"<<endl;
    printnumbers();

    return 0;
}

void addnumbers(int num){
    vector[pos]=num;
    pos++;

}

void printnumbers(){

    for (int i = 0; i < pos; i++)
    
        cout<<vector[i]<<endl;
    
    
}

