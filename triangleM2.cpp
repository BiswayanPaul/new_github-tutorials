#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter the length of the sides of the triangle"<<endl;
    cin>>s1>>s2>>s3;
    if (s1==s2&&s2==s3)
    {
        cout<<"The triangle is an equilateral triangle"<<endl;
    }
    else if (s1==s2||s2==s3||s1==s3)
    {
        cout<<"The triangle is an isosceles triangle"<<endl;
    }
    else
    {
        cout<<"The triangle is a scalene triangle"<<endl;
    }

    return 0;
}