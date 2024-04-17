#include <iostream>
using namespace std;

int fact(int n)
{
    int sum = 1;
    for (; n >= 1; n--)
    {
        sum = sum * n;
    }

    return sum;
}
int main()
{

    int r, a;
    cin >> a >> r;
    cout << fact(a) / (fact(r) * fact(a - r)) << endl;

    return 0;
}