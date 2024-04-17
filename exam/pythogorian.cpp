#include <iostream>
#include<cmath>
using namespace std;

bool fun(int n, int m, int o)
{
    int ma;
    int b;
    int c;

ma = max(n, max(m, o));

if (ma == n)
{
    b = m;
    c = o;
}
else if (ma == m)
{
    b = n;
    c = o;
}
else
{
    b = m;
    c = n;
}

if (ma*ma == (b*b + c*c))
    return 1;
else
    return 0;
}
int main()
{

    int n, m, o;
    cin >> n >> m >> o;

    cout << bool(fun(n, m, o));

    return 0;
}