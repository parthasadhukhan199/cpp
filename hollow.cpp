#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = 1; i <= a; i++)
    {
        if (i == 1 || i == a)

        {
            for (int j = 1; j <= b; j++)
            {
                cout << "$ ";
            }
        }
        else
        {
            cout << "$ ";
            for (int k = 1; k < b - 1; k++)
                cout << "  ";
            cout << "$ ";
        }
        cout << endl;
    }

    return 0;
}