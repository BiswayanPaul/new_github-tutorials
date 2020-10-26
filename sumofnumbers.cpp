#include<iostream>
using namespace std;
int main(){

    int n, sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while (n>0)
    {
        sum=sum+n;
        cout<<"The sum is"<<sum<<endl;
        cin>>n;
    }
    
    return 0;
}