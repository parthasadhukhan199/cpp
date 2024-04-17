#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int su=0;

    while(n>0)
    {
        int re=(n%10);
        
        su= re+(10*su);
        
        n=n/10;
    }

cout<<su;


    return 0;
}