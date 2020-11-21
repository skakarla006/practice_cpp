

#include "person.h"



int main(){
    person p("kiran","g",10);
    person k("k","g",20);
    
    if(p < k){
        cout << "k is older" << endl;
    }else{
        cout << "p is older" << endl;
    }
    
    cout << p.getname() << endl;
    cout << k.getname() << endl;
    
    int a=10, b=100;
    swap(a,b);
    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
    return 0;
}