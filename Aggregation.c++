#include<iostream>
using namespace std;

//Aggregation which calls another class
class snj{
    public:
    void m1(){
        cout<<"Good"<<endl;
    }
};
class raj{
    public:

    void m2(snj *s){
        s->m1();
        cout<<"nice"<<endl;
    }
};

int main(){
    raj r = raj();
    snj s = snj();
    r.m2(&s);
}
