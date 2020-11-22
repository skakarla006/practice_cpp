#pragma once
#include<iostream>
#include<string>

using namespace std;

class complexNumber{
  private:
    int realPart;
    int imaginaryPart;
    
  public:
    complexNumber();
    complexNumber(int realPart, int imaginaryPart);
    void setNumber(int realPart, int imaginaryPart);
    int getRealPart() const;
    int getimaginaryPart() const;
    complexNumber operator+ (complexNumber c1);
    complexNumber operator- (complexNumber c1);
    complexNumber operator* (complexNumber c1);
    void print() const;
    ~complexNumber();
};