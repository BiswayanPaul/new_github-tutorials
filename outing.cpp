#include <iostream>
using namespace std;
int main()
{
    int n, p = 3000,x;
    for (n = 1; n <= 30; n++)
    {
        if (n % 2 == 0)
        {
            continue;
        }
        cout << "You can go out on " << n << endl;
        cin>>x;
        p = p - x;
        if (p <= 0)
        {
            break;
        }
    }

    return 0;
}