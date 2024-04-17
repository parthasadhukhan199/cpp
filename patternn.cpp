#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;

    for(int i=0;i<a;i++){
        for(int k=0;k<a;k++){
            if(i==0||i==a-1||k==0||k==a-1)
            cout<<"# ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }


    return 0;
}