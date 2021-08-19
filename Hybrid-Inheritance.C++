#include<iostream>
using namespace std;
class snj{
    public:
    void m1(){
        cout<<"Parent"<<endl;
    }
};

class raj:public snj{
    public:
    void m2(){
        cout<<"Child1"<<endl;
    }
};

class john:public snj{
    public:
    void m3(){
        cout<<"Child2"<<endl;
    }
};

class Hope:public john,public raj{
    public:
    void m4(){
        cout<<"Hope:)"<<endl;
    }
};

int main(){
    Hope h = Hope();
    h.m2();
    h.m3();
    h.m4();
}