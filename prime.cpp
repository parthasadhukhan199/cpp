#include <iostream>
using namespace std;

int main()
{
    int a, i,w;
    cout << "enter the number :";
    cin >> a;

    for (i = 2; i < a / 2; i++)
    {
        if (a % i == 0)
        {
           w=1;
            break;
        }
        else
             w = 0;
    }
    if (w==0)
        cout << "the number is prime";
    else
    cout<<" the number is not prime";

    return 0;
}