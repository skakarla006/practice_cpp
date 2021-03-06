#pragma once

#include<iostream>
#include "ComplexNumber.h"
using namespace std;

class ComplexPolar{
    private:
        float length;
        float angle;
        
    public:
        ComplexPolar();
        ComplexPolar(float length, float angle);
        void setComplexPolar(float length, float angle);
        void setLength(float length);
        void setAngle(float angle);
        float getLength() const;
        float getAngle() const;
        void print() const;
        bool operator==(ComplexNumber complexNumber);
        ComplexNumber convert();
        friend ComplexNumber add2types(ComplexNumber& complexNumber, ComplexPolar& complexPolar);
};

