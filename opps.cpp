#include<iostream>
using namespace std;

class a{
int a,b,c;
public:
void input();
void output();
void result();
};

void a::input(){
    cout<<"enter 2 no.";
    cin>>a>>b;
}
void a::result(){
    c=a+b;
}
void a:: output(){
    cout<<"sum = "<<c;
}

main(){
a obj;
obj.input();
obj.result();
obj.output();

return 0;


}