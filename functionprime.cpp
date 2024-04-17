#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int s)
{
    for(int i=2;i<=sqrt(s);i++)
    {
        if(s%i==0)
        return false;
    }



return true;


}





int main()
{
    int a,b;
    cin>>a>>b;

    for(a=a;a<=b;a++)
    {
        if(isprime(a))
        cout<<a<<endl;
    }




    return 0;
}