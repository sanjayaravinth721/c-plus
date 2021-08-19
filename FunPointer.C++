#include<iostream>
using namespace std;
int m2(char *s){
    cout<<s<<endl;
}
int m1(int(*p)(char*)){
  
}
int main(){
    char x[20];
    cin>>x;
    cout<<x;
    cout<<"Now going to function pointer"<<endl;
    m2(x);
  
}