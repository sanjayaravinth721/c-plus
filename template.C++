#include<iostream>
using namespace std;

template<class T>T add(T &a,T &b){
    T x=a+b;
    return x;
}
template<class T,class H>H add(T &a,H &b){
    H x=a+b;
    return x;
}
template<class T>void print(T a){
    cout<<"Printing.."<<endl;
}

int main(){
    int x = 12;
    int f=13;
    int l=add(x,f);
    float y = 9.4;
    float p=5.7;
    float k=add(y,p);

    int o = 23;
    float w = 45.6;
    
    cout<<add(o,w)<<endl;

    cout<<l<<endl;
    cout<<k<<endl;
    print(2);
  

}