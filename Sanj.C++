#include<iostream>
using namespace std;
class snj{
    public:
    double *p = new double(10.90);
    void m1(int b[]){
        cout<<sizeof(*b)<<endl;
         cout<<sizeof(p)<<endl;
    }
 
};
int main(){
    snj s;
    int a=98;
    void *p1=&a;
    int *p2;
    p2=(int*)p1;
    int &k=a;
    cout<<*p2<<endl;
    cout<<&k<<endl;
    cout<<&a<<endl;
    
}