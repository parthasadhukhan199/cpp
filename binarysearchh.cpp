#include <iostream>
using namespace std;
int binary(int arr[], int n, int key)
{
    int fi = 0, li = n -1;
    int mi;
    while (fi < li)
    {
        mi = (fi + li) / 2;
        if (arr[mi] == key)
            return mi;
        else if (arr[mi] < key)
        {
            fi = mi;
        }
        else
        {
            li = mi;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2,5, 5, 6, 8, 12, 22,24, 35, 43};

    cout << binary(arr, 10, 24);
}