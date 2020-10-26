#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the number whose mutiple is to be avoided"<<endl;
    cin>>x;
    for ( int i = 0; i <= n; i++)
    {
        if (i%x==0)
        {
            continue;
        }
        
        cout<<i<<endl;
    }
    return 0;
}