#include<iostream>
using namespace std;
class snj{
    private:
    int a;
    int b;
    public:
    void m1(){
        cout<<"Print on snj"<<endl;
    }
};

class raj:public snj{
    private:
    int c;
    int d;

    public:
    void m2(){
        cout<<"Print on child of snj raj"<<endl;
    }

};

class john : public raj{
    public:
    void m2(){
        cout<<"Printing child of raj"<<endl;
    }
};

int main(){
    snj s = snj();
    raj r = raj();
    john j = john();
    s.m1();
    r.m1();
    r.m2();
    j.m1();
    j.m2();
}


