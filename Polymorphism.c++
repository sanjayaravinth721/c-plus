#include<iostream>
using namespace std;
//method overloading
class snj{
    public:
    int a;
    void m2(){
        cout<<"M2"<<endl;
    }
};
class tom{
    public:
    void m2(){
        cout<<"M2 Overloaded"<<endl;
    }
};
//method overriding
class jim{
    public:
    int m3(int a,int b){
        cout<<a<<b<<endl;
    }
};

class kim{
    public:
    char m3(char a){
        cout<<a<<endl;
    }
};
int main(){
    tom t = tom();
    t.m2();
    jim j = jim();
    kim k = kim();
    j.m3(3,5);
    k.m3('k');
}
