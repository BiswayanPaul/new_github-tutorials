#include <iostream>
using namespace std;
int main()
{
    //Inverted Half Pyramid
     int rows;
     cin>>rows;
     for (int i = rows; i >= 1; i--)
     {
         for (int j = 1;j<=i; j++)
         {
             cout<<"* " ;
         }
         cout<<endl;
     }
     //180 degree rotated of the above
    int row;
    cin>>row;
    for(int i = 1;i<=row;i++){
        for (int l = 1; l<=(row-i); l++)
        {
            cout<<"  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout<< "* " ;
        }
        cout<<endl;
    }
    //Pyramids using numbers
    int rowe;
    cin>>rowe;
    int k=1;
    for (int i = 1; i <= rowe; i++)
    {   for (int j = 1; j <= i; j++)
        {

            cout<<k<<" ";
            k=k+1;
        }
    cout<<endl;

    }
     int rowh;
    cin>>rowh;
    for (int i = 1; i <= rowh; i++)
    {   for (int j = 1; j <= i; j++)
        {

            cout<<j<<" ";
            k=k+1;
        }
    cout<<endl;

    }
     int rowk;
    cin>>rowk;
    for (int i = 1; i <= rowk; i++)
    {   for (int j = 1; j <= i; j++)
        {

            cout<<i<<" ";

        }
    cout<<endl;

    }
    int rowr;
    cin >> rowr;
    for (int i = 1; i <= rowr; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * rowr - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
    for (int i = rowr; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * rowr - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }

    return 0;
}