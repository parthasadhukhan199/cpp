#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b;
    cin>>b;
    while (a <= b)
    {
        a++;
        if (a % 3 == 0)
            continue;

        if (a >= 90)
            break;

        cout << a << "     ";
    }

    return 0;
}