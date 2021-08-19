#include<iostream>
using namespace std;

class newclass{
    public:
          int a;
          int b;
          int c;
          static int d;
        newclass(int p,int l){
            this->a=p;
            this->c=l;
            d++;
            cout<<a<<" "<<c<<" "<<d<<endl;
        }
        newclass(int p,int q,int l){
            a=p;
            b=q;
            c=l;

            cout<<"Adding three"<<endl;
            cout<<a+b+c<<endl;
        }
        newclass(){
            cout<<"Default constructer"<<endl;
        }
      
};
int newclass :: d=0; //datatype //class //scope //variable

int main(){
    newclass n;
    int p;
    cin>>p;
    int q;
    cin>>q;
    int l;
    cin>>l;
    
    newclass n1 = newclass(p,q,l);
    //newclass n2 = newclass(p,q);
    int *a = new int[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cout<<a[i];
    }
    cout<<endl;
    newclass  n3=newclass(p,l);
    newclass n4 = newclass(p,l);
    cout<<newclass::d<<endl;
}