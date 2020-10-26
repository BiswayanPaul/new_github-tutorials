#include<iostream>
using namespace std;
int main(){
    char symp;
    cout<<"Enter the symptoms from the following options "<<endl;
    cout<<" a)Typhoid"<<endl;
    cout<<" b)Amoebiasis"<<endl;
    cout<<" c)Pepticulcer syndrome"<<endl;
    cout<<" d)Urinary Tract Infection"<<endl;
    cout<<" e)Osteo Arthritis"<<endl;
    cout<<" f)Debitis Melitis"<<endl;
    cout<<" g)Acne"<<endl;
    cout<<" h)Scabies"<<endl;
    cout<<" i)Ringworm"<<endl;
    cout<<" j)Constipation "<<endl;
    cin>>symp;
    switch (symp)
    {
    case 'a':
        cout<<"Chloramphenicol"<<endl;
        break;
    case 'b':
        cout<<"Metronidazole"<<endl;
        break;
     case 'c':
        cout<<"Pantropazole"<<endl;
        break;
     case 'd':
        cout<<"Ciprofloxacin"<<endl;
        break;
     case 'e':
        cout<<"Glucosamine"<<endl;
        break;
     case 'f':
        cout<<"Metformine"<<endl;
        break;
     case 'g':
        cout<<"Tretinoin Cream"<<endl;
        break;
     case 'h':
        cout<<"Gamabenzenehexachloride"<<endl;
        break;
     case 'i':
        cout<<"Fluconazole"<<endl;
        break;
     case 'j':
        cout<<"Lactulose"<<endl;
        break;
    default:
    cout<<"I am still learning"<<endl;
        break;
    }

    return 0;
}