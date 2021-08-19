#include<iostream>
using namespace std;

//virtual
class snj{
    public:
    int a;
    virtual void m1(){
        cout<<"Hi"<<endl;
    }
};
class tom : public snj{
    public:
    void m1(){
    
        cout<<"Bye"<<endl;
        
    }
};

//pureVirtual
class jim {
    public:
    virtual void m3()=0; //abstract function
    virtual void go(){
        cout<<"go.."<<endl;
    }
};
class tim : public jim{
    public:
    void m3(){
        cout<<"Virtual created"<<endl;
    }
     void go(){
        cout<<"Virtual go.."<<endl;
    }
};

int main(){
    snj *s;
    tom t = tom();
    s=&t;
    s->m1();

    jim *j;
    tim p = tim();
    j=&p;
    j->m3();
    j->go();
}