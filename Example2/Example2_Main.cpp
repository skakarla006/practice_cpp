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
    
    return 0;
}