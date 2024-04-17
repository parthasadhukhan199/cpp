#include <iostream>
using namespace std;

bool ispyh(int x, int y, int z)
{
  int b, c, m = max(x, max(y, z));
  if (x == m)
  {
    b = y;
    c = z;
  }
  else if (m == y)
  {
    b = x;
    c = z;
  }
  else
  {
    b = x;
    c = y;
  }
  if (m * m == b * b + c * c)
    return true;
  else
    return false;
}

int main()
{

  int a, b, c;
  cin >> a >> b >> c;

  if (ispyh(a, b, c))
  {
    cout << "these are pyhagoras triplet";
  }
  else
    cout << " these are not pythagoras triplet";

  return 0;
}