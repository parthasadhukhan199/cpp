#include <iostream>
using namespace std;
void swapAlternet(int a[]){
        int t;
    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i+=2)
    {
        if (i + 1 < (sizeof(a) / sizeof(a[0])))
        {
            t = a[i];
            a[i] = a[i + 1];
            a[i + 1] = t;
        }
    }


}
int main()
{
    int a[9] = {5, 6, 3, 2, 4, 3, 1, 3, 5};
    swapAlternet(a);

    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++){
        cout<<" "<<a[i];
    }

        return 0;
}