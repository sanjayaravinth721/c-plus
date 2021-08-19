#include<string>
#include<iostream>
using namespace std;
class Machine{
    private:
       int a;
       string b;
       string c;
    public:
    Machine(int a,string b,string c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void display(){
        cout<<"Machine Code:"<<a<<"Machine name:"<<b<<"Machine nickName:"<<c<<endl;
    }
};

class Vehicle:public Machine{

};

int main(){
    string a;
    int b;

    cout<<"Enter the beast name"<<endl;
    cin>>a;

    cout<<"Enter the code"<<endl
    cin>>b;

    Vehicle v=Vehicle(b,a);
}