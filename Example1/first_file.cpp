#include "complexNumber.h"

int main(){
    complexNumber c(10,20);
    complexNumber d;
    
    d.setNumber(1,2);
    c.print();
    d.print();
    
    complexNumber k = c+d;
    cout<< "Addition: " << endl;
    k.print();
    cout << "--------------------------------------" << endl;
    k = c-d;
    cout<< "Subtraction : " << endl;
    k.print();
    cout << "--------------------------------------" << endl;
    k = c*d;
    cout<< "Multiplication: " << endl;
    k.print();
    cout << "--------------------------------------" << endl;
    
    return 0;
}