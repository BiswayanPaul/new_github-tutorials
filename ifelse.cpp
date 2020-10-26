#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;
    if (a>b)
    {
        if (a>c){
            cout<<"The maximum number is "<<a<<endl;
        }
        else
        {
            cout<<"The maximum number is "<<c<<endl;
        }
        
    }
    else
    {
        if (b>c)
        {
            cout<<"The maximum number is "<<b<<endl;
        }
        else
        {
            cout<<"The maximum number is "<<c<<endl;
        }
        
    }
    


    return 0;
}