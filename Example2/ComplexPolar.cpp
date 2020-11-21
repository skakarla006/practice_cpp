#include "ComplexPolar.h"
#include <math.h>

ComplexPolar::ComplexPolar(){
    cout<< "Default ComplexPolar constructor" << endl;
}

ComplexPolar::ComplexPolar(float length, float angle):length(length), angle(angle){
    cout<< "Length: " << length << "Angle: " <<  angle << endl;
}

void ComplexPolar::setComplexPolar(float length, float angle){
    this->length = length;
    this->angle = angle;
}

void ComplexPolar::setLength(float length){
    this->length = length;
}

void ComplexPolar::setAngle(float angle){
    this->angle = angle;
}

float ComplexPolar::getLength() const{
    return this->length;
}

float ComplexPolar::getAngle() const{
    return this->angle;
}

void ComplexPolar::print() const{
    cout<< "Length: " << this->length << "Angle: " <<  this->angle << endl;
}

bool ComplexPolar::operator==(ComplexNumber complexNumber){
    return ((round(length*cos(angle * M_PI/180)) == complexNumber.getRealNumber()) && (round(length*sin(angle*M_PI/180)) == complexNumber.getImaginaryNumber()));
}

ComplexNumber ComplexPolar::convert(){
    return ComplexNumber(round(length*cos(angle* M_PI/180)), round(length*sin(angle *M_PI/180)));
}