#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for ( i = 2;i<n; i++)
    {
        if (n%i==0)
        {
            cout<<"This is a non prime number"<<endl;
            break;
        }
       
    }
     if (i==n)
     {
        cout<<"This ia a prime number"<<endl;
     }

    return 0;
}