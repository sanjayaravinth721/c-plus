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
class priya {
    public:
    void m2(){
        cout<<"Print on priya"<<endl;
    }
};

class raj:public snj,public priya{
    private:
    int c;
    int d;

    public:
    void m3(){
        cout<<"first child"<<endl;
    }

};
 


int main(){
    snj s = snj();
    raj r = raj();
    priya p=priya();
    

    r.m1();
    r.m2();
    r.m3();
}
