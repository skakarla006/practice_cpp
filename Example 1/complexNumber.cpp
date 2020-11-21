#include "complexNumber.h"

complexNumber::complexNumber(){
    cout<< "default constructor" << endl;
    
}

complexNumber::complexNumber(int realPart, int imaginaryPart): realPart(realPart), imaginaryPart(imaginaryPart){
    cout << "Real Part: " << realPart << "\t Imaginary Part: " << imaginaryPart << endl;
}

void complexNumber::setNumber(int realPart, int imaginaryPart){
    complexNumber::realPart = realPart;
    complexNumber::imaginaryPart = imaginaryPart;
}

int complexNumber::getRealPart() const{
    return realPart;
}

int complexNumber::getimaginaryPart() const{
    return imaginaryPart;
}

complexNumber complexNumber::operator+ (complexNumber c1){
    return complexNumber(realPart+c1.getRealPart() , imaginaryPart+c1.getimaginaryPart());
}

complexNumber complexNumber::operator- (complexNumber c1){
    return complexNumber(realPart-c1.getRealPart() , imaginaryPart-c1.getimaginaryPart());
}

complexNumber complexNumber::operator* (complexNumber c1){
    return complexNumber((realPart*c1.getRealPart() - imaginaryPart*c1.getimaginaryPart()) , (realPart*c1.getimaginaryPart() + c1.getRealPart() * imaginaryPart));
}

void complexNumber::print() const{
    cout<< "Real Part: " << getRealPart() << "\t Imaginary Part: " << getimaginaryPart() << endl;
}

complexNumber::~complexNumber(){
    cout << "Default Destructor" << endl;
}