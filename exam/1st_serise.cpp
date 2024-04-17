#include <iostream>
using namespace std;
int main()
{
    int a;
    float t = 0;

    cin >> a;

    for ( int i = 1; i <=a; i++)
    {

        t = t + (1.00001 / i);
    }
    
    cout << "\n"<< t;

    return 0;
}