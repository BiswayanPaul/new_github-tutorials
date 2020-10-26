#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    if (s1==s2)
    {
        if (s2==s3)
        {
            cout<<"Equilateral Triangle"<<endl;
        }
        else
        {
            cout<<"Isosceles Triangle"<<endl;
        }
    }
    else if (s2==s3)
    {
        if (s2==s1)
        {
            cout<<"Equilateral Triangle"<<endl;
        }
        else
        {
            cout<<"Isosceles Triangle"<<endl;
        }
    }
    else if (s1==s3)
    {
          if (s3==s2)
        {
            cout<<"Equilateral Triangle"<<endl;
        }
        else
        {
            cout<<"Isosceles Triangle"<<endl;
        }
    }
    else
    {
        cout<<"Scalene Triangle"<<endl;
    }
    
    
    return 0;
}