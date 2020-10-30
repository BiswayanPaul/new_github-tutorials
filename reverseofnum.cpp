#include <iostream>
using namespace std;
int main()
{
    int n;
    int reverse = 0;
    cout << "enter a number" << endl;
    cin >> n;
    while (n > 0)
    {
        int last = n% 10;
        reverse = (reverse * 10) + last;
        n = n / 10;
    }

    cout << reverse;

    return 0;
}