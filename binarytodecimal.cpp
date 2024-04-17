#include<iostream>
using namespace std;

int btod(int x)
{
    int ans=0;
    int pow=1;

    while(x>0)
    {
        int last=x%2;
        ans=ans+(last*pow);
        pow*=2;
        x=x/10;
    }
return ans;
}




int main()
{
    int a;
    cin>>a;

    cout<<btod(a);
    return 0;
}