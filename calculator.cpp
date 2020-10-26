#include<iostream>
using namespace std;
int main(){
    float n1,n2;
    char op;
    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;
    cout<<"Enter the function need to be executed"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
    cout<<n1+n2<<endl;    
        break;
    case '-':
    cout<<n1-n2<<endl;    
        break;
    case '*':
    cout<<n1*n2<<endl;    
        break;
    case '/':
    cout<<n1/n2<<endl;    
        break;
    
    default:
    cout<<"Incorrect input"<<endl;
        break;
    }
    return 0;
}