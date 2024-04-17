#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;

    switch (a)
    {
    case 'a':
        cout << "hello";
        break;

    case 'b':
        cout << "namaste";
        break;
    case 'c':
        cout << "hola";
        break;
    case 'd':
        cout << "fuck";
        break;
    case 'e':
        cout << "ashole";
        break;
    default:
        cout << "enter another:";
        break;
    }

    return 0;
}
