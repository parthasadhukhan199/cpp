#include<iostream>
using namespace std;
int reverse(int n){
    int t=0,f=0;
    for(int i=1;n!=0;i++){
        
        t=n%10;
        n=n/10;
        f=(f*10)+t;
    }

    return f;
}
int main(){


    cout<<reverse(-123);
}