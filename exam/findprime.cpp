//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool fun(int a){
    int i=1;

    for(int i=2;i<a;i++){
        if(a%i==0)
        return 0;  
    }
    return 1;
}
int main(){

cout<<fun(1300);

}