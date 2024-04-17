#include <iostream>
#include<climits>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int max=INT_MIN,minn=INT_MAX;

    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    for(int j=0;j<a;j++)
    {
        if(array[j]>max)
        max=array[j];

        minn=min(array[j],minn);
       
    }
    cout<<max<<" "<<minn;

    return 0;
}
