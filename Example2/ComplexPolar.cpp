#include "ComplexPolar.h"

ComplexPolar::ComplexPolar(){
    cout<< "Default ComplexPolar constructor" << endl;
}

ComplexPolar::ComplexPolar(float length, float angle):length(length), angle(angle){
    cout<< "Length: " << length << "Angle: " <<  angle << endl;
}

void ComplexPolar::setComplexPolar(float length, float angle){
    ComplexPolar::length = length;
    ComplexPolar::angle = angle;
}

void ComplexPolar::setLength(float length){
    ComplexPolar::length = length;
}

void ComplexPolar::setAngle(float angle){
    ComplexPolar::angle = angle;
}

float ComplexPolar::getLength() const{
    return ComplexPolar::length;
}

float ComplexPolar::getAngle() const{
    return ComplexPolar::angle;
}

void ComplexPolar::print() const{
    cout<< "Length: " << ComplexPolar::length << "Angle: " <<  ComplexPolar::angle << endl;
}