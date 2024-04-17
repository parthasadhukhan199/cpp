#include<iostream>
using   namespace std;
void incriment(int *b){
    *b++;
    
}
int main(){
int a=100;
int *aprt=&a;

incriment(aprt);
cout<<a;

    return 0;
}