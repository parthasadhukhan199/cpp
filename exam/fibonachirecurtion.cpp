#include <iostream>
using namespace std;
void fib(int x) {
    static int n1=0,n2=1,n3;
    if(x>0){
    n3=n1+n2;
    n1=n2;
    n2=n3;

    cout<<n3<<",";
    fib(x-1);
    }
   
}
int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   fib(x-2);
   
   
   return 0;
}