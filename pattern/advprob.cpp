#include <iostream>
using namespace std;
int main()
{
    int rowh;
    cin>>rowh;
    for (int i = rowh; i >= 1; i--)
    {   for (int j = 1; j <= i; j++)
        {

            cout<<j<<" ";

        }
    cout<<endl;

    }
    int row;
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i%2==0 && j%2==0)||(i%2!=0&&j%2!=0))
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }

        }
        cout<<endl;
    }
    int rows;
    cin>>rows;
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <i; j++)
        {

           cout<<" ";

        }
         for (int j = 1; j <=rows; j++)
        {

           cout<<"*  ";

        }

    cout<<endl;
    }
    int r;
    cin>>r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <i; j++)
        {

           cout<<" ";

        }
         for (int j = 1; j <=r; j++)
        {

           cout<<"*  ";

        }

        cout<<endl;
    }
     int ro;
    cin>>ro;
    for (int i = 1; i <= ro; i++)
    {
        for (int j = 1; j <=(ro-i) ; j++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <=i; j++)
        {
         cout<<" "<<j<<"  ";
        }
        cout<<endl;
    }
      int ror;
    cin>>ror;
    for (int i = 1; i <= ror; i++)
    {
        for (int j = 1; j <=(ror-i) ; j++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <=i; j++)
        {
         cout<<" "<<i<<"  ";
        }
        cout<<endl;
    }

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l <= (n - i); l++)
        {
            cout << "  ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << " " << j;
        }
        for (int k = 2; k <= i; k++)
        {
            cout << " " << k;
        }

        cout << endl;
    }
    int a;
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        for (int k = 1; k <=a-i; k++)
        {
            cout<<"   ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    for (int i = a-1; i >=1; i--)
    {
        for (int k = 1; k <=a-i; k++)
        {
            cout<<"   ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    int x;
    cin>>x;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if ((i+j)%4==0 ||(i==2&&j%4==0) )
            {
                cout<<" *";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    
    return 0;
}