#include<iostream>
using namespace std;

namespace john{
    class snj{
        public:
        void m1(){
        cout<<"You have entered in namespace class"<<endl;
        }
    };
}

namespace tim{
    void m2(){
        cout<<"You have entered namespace"<<endl;
    }
}

namespace plip{
    void m3(){
        cout<<"Plip"<<endl;
    }
}

using namespace plip;
using namespace tim;
using namespace john;
int main(){
    m2();
    m3();
    john::snj s;
    s.m1();
}