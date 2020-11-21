#include "ComplexNumber.h"
#include "ComplexPolar.h"

int main(){
    
    ComplexNumber c(10,10);
    ComplexPolar p(14.14, 45);
    
    if(p == c)
        cout << "both are same" << endl;
    else
        cout << "they are different" << endl;
    
    p.convert();
    
    ComplexNumber* comp = new ComplexNumber(10,20);
    comp->print();
    
    ComplexNumber* compArr = new ComplexNumber[10];
    // for(int i =0 ; i< 10; i++){
    //     compArr[i].print();
    //     delete &compArr[i];
    // }
    // delete &compArr[9];
     compArr[0].print();
    delete[] compArr;
    
    
    return 0;
}