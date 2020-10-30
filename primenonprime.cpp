#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number"<<endl;
    cin>>n;
    bool flag;
    for ( i = 2;i<sqrt(n); i++)
    {
        
        if (n%i==0)
        {
            cout<<"This is a non prime number"<<endl;
            flag=1;
            break;
            
        }
       
    }
     if (flag==0)
     {
        cout<<"This ia a prime number"<<endl;
     }

    return 0;
}