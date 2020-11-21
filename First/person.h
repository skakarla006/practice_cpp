#pragma once

#include<string>
#include<iostream>
using namespace std;


class person{
  private:
    string firstname;
    string lastname;
    int age;
    
  public:
    person(string firstname, string lastname, int age): firstname(firstname), lastname(lastname), age(age){
        
    }
    string getname() const{
        return firstname + lastname;
    }
    int getage() const{
        return age;
    }
    bool operator<(person p){
        return age < p.getage();
    }
    
};

void swap(int& a, int& b);