#include <iostream>
using namespace std;

int main()
{
    

    while (1)
    {
        int a;
        cout << " enter ";
        cin >> a;

        int i;
        for (i = 2; i <= (a / 2) ; i++)
        {
            if (a % i == 0)
                break;
        }
        if (i == 1+(a / 2))
            break;
    }

    return 0;
}