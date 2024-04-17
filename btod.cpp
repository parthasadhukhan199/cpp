#include<iostream>
using namespace std;


int az(int x)
{
    int ans=0, p=1;
    while(x>0)
    {
        int last=x%10;
        ans=ans+(last*p);
        p*=2;
        x=x/10;
    }
    return ans;
}







int main()
{
    int a;
    cin>>a;


    cout<<az(a);

    return 0;
}