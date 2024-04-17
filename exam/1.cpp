#include<iostream>
using namespace std;

class a{
//int a=2,b=3;

public:
int sum(int a,int b){
    return a+b;
}
int pro(int a,int b);
};
class d:public virtual a{
  

};
int a::pro(int a,int b){
return a*b;
}
int main(){
    d obj;

    cout<<obj.sum(4,5);
    cout<<obj.pro(4,5);

    return 0;
}