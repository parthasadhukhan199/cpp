#include <iostream>
using namespace std;
void swapAlternet(int a[],int size){
        int t;
    for (int i = 0; i < size; i+=2)
    {
        if (i + 1 < size)
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
    swapAlternet(a,9);

    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++){
        cout<<" "<<a[i];
    }

        return 0;
}