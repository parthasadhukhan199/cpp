#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++)
    {
        for(int g=1;g<=i-1;g++)
        {
            cout<<" ";
        }
        for(int h=n;h>=i;h--)
        {
            cout<<"* ";
        }
       
        cout<<endl;
    }




    return 0;
}