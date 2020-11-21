#pragma once

#include<iostream>
class ComplexPolar;

using namespace std;

class ComplexNumber{
    private:
        float realNumber;
        float imaginaryNumber;
        
    public:
        ComplexNumber();
        ComplexNumber(float realNumber, float imaginaryNumber);
        void setComplexNumber(float realNumber, float imaginaryNumber);
        void setRealNumber(float realNumber);
        void setImaginaryNumber(float imaginaryNumber);
        float getRealNumber() const;
        float getImaginaryNumber() const;
        void print() const;
        friend ComplexNumber add2types(ComplexNumber& complexNumber, ComplexPolar& complexPolar);
        ~ComplexNumber();
};

