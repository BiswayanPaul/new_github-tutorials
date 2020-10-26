#include<iostream>
using namespace std;

int main(){
    //printing hello world
    cout<<"Hello World";
    //taking input from user and performing function
    int ammount1;
    cin>>ammount1;

    int ammount2;
    cin>>ammount2;
    int sum=ammount1+ammount2;
    cout<<"sum\n";//If we write sum inside quotetions then it will print the word only and not the value stored in it

    cout<<sum<<endl;//this is the correct way to print the value stored in sum
    //<<endl refers to next line or we can use\n for new line
}
