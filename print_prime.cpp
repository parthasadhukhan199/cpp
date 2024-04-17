#include <iostream>
using namespace std;

int main()
{
    int a ,b;
    cin>>b;

    for(a=1;a<b;a++)
    { 
        int i;
        for( i=2;i<=a/2;i++)
        {
            if(a%i==0)
            break;
        }
        if (i==(a/2)+1)
        cout<<a<<endl;

    }




    return 0;
}