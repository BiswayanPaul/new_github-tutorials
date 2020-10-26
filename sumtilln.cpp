#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for ( int i = 0; i <= n; i++)
    {
        sum=sum+i;
    }
    cout<<"The sum of all numbers till n is "<<sum<<endl;

    return 0;
}