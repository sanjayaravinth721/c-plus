#include<iostream>
using namespace std;

//parent with many childrens

class snj{
    public:
    void m1(){
        cout<<"Parent"<<endl;
    }

};

class raj : public snj{
    public:
    void m2(){
        cout<<"Child1"<<endl;
    }
};

class john : public snj{
    public:
    void m3(){
        cout<<"Child2"<<endl;
    }
};

int main(){
    snj s = snj();
    raj r = raj();
    john j = john();

    r.m1();
    r.m2();

    j.m1();
    j.m3();
}