#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fun(string a)
{
    string b=a;

    reverse(a.begin(),a.end());

    if(a==b)
    cout<<"palindrome";
    else
    cout<<"not";

}

int main(){
    string s;

    cin>>s;

    fun(s);



    return 0;
}