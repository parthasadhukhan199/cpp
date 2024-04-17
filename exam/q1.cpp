#include<iostream>
using namespace std;
void maxtilli(int a[],int n){
    int mx=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>mx){
            mx=a[i];}
            cout<<a[i]<<" ="<<mx<<endl;
        
    }
}

int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
   maxtilli(a,10);
    return 0;
}