#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(){
    cout<< "Default ComplexNumber constructor" << endl;
}

ComplexNumber::ComplexNumber(float realNumber, float imaginaryNumber): realNumber(realNumber), imaginaryNumber(imaginaryNumber){
    cout<< "Real Number: " << realNumber << "Imaginary Number: " << imaginaryNumber << endl;
}

void ComplexNumber::setComplexNumber(float realNumber, float imaginaryNumber){
    ComplexNumber::realNumber = realNumber;
    ComplexNumber::imaginaryNumber = imaginaryNumber;
}

void ComplexNumber::setRealNumber(float realNumber){
    ComplexNumber::realNumber = realNumber;
}

void ComplexNumber::setImaginaryNumber(float imaginaryNumber){
    ComplexNumber::imaginaryNumber = imaginaryNumber;
}

float ComplexNumber::getRealNumber() const{
    return ComplexNumber::realNumber;
}

float ComplexNumber::getImaginaryNumber() const{
    return ComplexNumber::imaginaryNumber;
}

void ComplexNumber::print() const{
    cout<< "Real Number: " << ComplexNumber::realNumber << "Imaginary Number: " << ComplexNumber::imaginaryNumber << endl;
}

ComplexNumber::~ComplexNumber(){
    cout << "Destructor called" << endl;
}