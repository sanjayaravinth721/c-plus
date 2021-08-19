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

int main(){
    snj s = snj();
    raj r = raj();
    s.m1();
    r.m1();
    r.m2();

}

