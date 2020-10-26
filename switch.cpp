#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Enter the option"<<endl;
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Hola"<<endl;
        break;
    case 'c':
        cout<<"Namaste"<<endl;
        break;
    case 'd':
        cout<<"Salut"<<endl;
        break;        
    default:
        cout<<"I am learning more!!"<<endl;
        break;
    }


    return 0;
}