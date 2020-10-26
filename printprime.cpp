#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the range "<<endl;
    cin>>a>>b;
    for (int i=a;i<=b;i++)
    {
        int n;
        for ( n=2;n<i ; n++)
        {
            if (i%n==0)
            {
                break;
            }
            
        }
        if (n==i)
            {
                cout<<i<<endl;
            }
        
        
    }
    


    return 0;
}